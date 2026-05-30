#define __NOP __asm__ volatile ("xor x0, x0, x0")
#define LED_REG_ADDR   ((volatile unsigned int*) 0x000001000)

int main() {

    int a = 10;
    int b = 20;

    int* c = (volatile unsigned int*)0x050;

    *c = a + b;

    while (1)
    {
        __asm__ volatile ("li t0, 9000000\n\t"
        "2:\n\t"
        "addi t0, t0, -1\n\t"
        "bnez t0, 2b\n\t"
        :
        :
        : "t0"
    );
        *LED_REG_ADDR = 0x1;

        __asm__ volatile ("li t0, 9000000\n\t"
        "2:\n\t"
        "addi t0, t0, -1\n\t"
        "bnez t0, 2b\n\t"
        :
        :
        : "t0"
    );
        *LED_REG_ADDR = 0x0;

    }
    

    return *c;
}
