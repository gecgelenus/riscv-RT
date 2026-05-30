OUTPUT_ARCH( "riscv" )
ENTRY( _start )

MEMORY
{
    IRAM (rx)  : ORIGIN = 0x00000000, LENGTH = 4K
    DRAM (rw)  : ORIGIN = 0x00001000, LENGTH = 4K
}

SECTIONS
{
    /* ── Instruction RAM ── */
    .text : {
        *(.text.init)
        *(.text*)
    } > IRAM


    .bss : {
        _bss_start = .;
        *(.bss*)
        *(.sbss*)
        *(COMMON)
        _bss_end = .;
    } > DRAM
    
    .rodata : {
        *(.rodata*)
    } > DRAM
    


    /* ── Data RAM ── */
    .data : {
        _data_start = .;
        *(.data*)
        *(.sdata*)
        _data_end = .;
    } > DRAM


}