#define __NOP __asm__ volatile ("xor x0, x0, x0")
#define LED_REG_ADDR   ((volatile unsigned int*) 0x000001000)

#define DELAY(n) __asm__ volatile (     \
    "li t0, %0\n\t"                     \
    "1:\n\t"                            \
    "addi t0, t0, -1\n\t"              \
    "bnez t0, 1b\n\t"                   \
    :                                   \
    : "i"(n)                            \
    : "t0"                              \
)






int main() {
    *LED_REG_ADDR = 0x3;


    while (1)
    {
        DELAY(9000000);
        *LED_REG_ADDR = 0xFF;

        DELAY(9000000); 
        *LED_REG_ADDR = 0x10;


    }
    

    return 0;
}
