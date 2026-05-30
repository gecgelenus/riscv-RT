#define __NOP __asm__ volatile ("xor x0, x0, x0")
#define LED_REG_ADDR   ((volatile unsigned int*) 0x00000100)

int main() {

    while (1)
    {
        __asm__ volatile ("li t0, 9000\n\t"
        "2:\n\t"
        "addi t0, t0, -1\n\t"
        "bnez t0, 2b\n\t"
        :
        :
        : "t0"
    );
        *LED_REG_ADDR = 0x1;

        __asm__ volatile ("li t0, 9000\n\t"
        "2:\n\t"
        "addi t0, t0, -1\n\t"
        "bnez t0, 2b\n\t"
        :
        :
        : "t0"
    );
        *LED_REG_ADDR = 0x0;

    }
    

    return 0;
}
