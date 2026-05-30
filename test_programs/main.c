#include <stdint.h>

// Global variables initialized to 0 (placed in .bss section in Data RAM)
volatile int32_t  var_word;
volatile int16_t  var_half;
volatile uint16_t var_uhalf;
volatile int8_t   var_byte;
volatile uint8_t  var_ubyte;

// Global flag to report test status: 1 = Success, 0xFFFFFFFF = Failed
volatile uint32_t test_status = 1;

void fail_test() {
    test_status = 0xFFFFFFFF; // If your simulator watches this memory address, it knows it failed
    while(1); 
}

int main() {
    // =========================================================================
    // 1. DATA SIZE & SIGN EXTENSION TESTS
    // =========================================================================
    
    // Test Signed Byte (lb) - Should sign-extend 0x80 to 0xFFFFFF80
    var_byte = 0x80;
    if ((int32_t)var_byte != (int32_t)0xFFFFFF80) fail_test();

    // Test Unsigned Byte (lbu) - Should zero-extend 0x80 to 0x00000080
    var_ubyte = 0x80;
    if ((uint32_t)var_ubyte != (uint32_t)0x00000080) fail_test();

    // Test Signed Halfword (lh) - Should sign-extend 0x8000 to 0xFFFF8000
    var_half = 0x8000;
    if ((int32_t)var_half != (int32_t)0xFFFF8000) fail_test();

    // Test Unsigned Halfword (lhu) - Should zero-extend 0x8000 to 0x00008000
    var_uhalf = 0x8000;
    if ((uint32_t)var_uhalf != (uint32_t)0x00008000) fail_test();

    // Test Word (lw)
    var_word = 0xABCDEF12;
    if (var_word != 0xABCDEF12) fail_test();


    // =========================================================================
    // 2. READ-AFTER-WRITE (RAW) HAZARD TESTS
    // =========================================================================
    // This tests if your register file bypass/forwarding logic is working.
    // The CPU stores to memory, loads it back, and immediately uses it.
    
    // RAW - Word
    var_word = 0x11223344;
    int32_t raw_w = var_word; // 'lw' instruction followed instantly by an evaluation
    if (raw_w != 0x11223344) fail_test();

    // RAW - Signed Byte (Requires forwarding + sign extension simultaneously!)
    var_byte = 0xF0;
    int32_t raw_b = var_byte; 
    if (raw_b != (int32_t)0xFFFFFFF0) fail_test();

    // RAW - Unsigned Byte (Requires forwarding + zero extension simultaneously!)
    var_ubyte = 0xF0;
    uint32_t raw_ub = var_ubyte;
    if (raw_ub != 0x000000F0) fail_test();


    // =========================================================================
    // 3. WRITE-AFTER-READ (WAR) HAZARD TESTS
    // =========================================================================
    // This ensures a pending store instruction doesn't overwrite data 
    // before an older load instruction finishes reading it.
    
    int32_t war_temp1, war_temp2;

    var_word = 50;
    war_temp1 = var_word; // Load 50
    var_word = 100;       // Immediate Store 100 to the same address
    war_temp2 = var_word; // Load 100

    if (war_temp1 != 50)  fail_test(); // If this is 100, your WAR protection failed!
    if (war_temp2 != 100) fail_test();

    // =========================================================================
    // SUCCESS
    // =========================================================================
    test_status = 0xABCDEEEF; // Custom "Pass" Magic Number
    while(1);
    return 0;
}