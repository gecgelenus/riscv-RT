#define __NOP __asm__ volatile ("xor x0, x0, x0")
#define RAM_TEST_ADDR  ((volatile unsigned int*) 0x00000300)
#define LED_REG_ADDR   ((volatile unsigned int*) 0x00000400)

int main() {

    int a = 10;
    int b = 20;
    for(int i = 0; i < 10;i++){
        b += 1;
    }
    *RAM_TEST_ADDR = a + b; 
    
    __asm__ volatile ("xor x30, x30, x30");
    __asm__ volatile ("addi x30, x30, 1");
    __asm__ volatile ("sw x30,  256(x0)");



    while (1)
    {
        __asm__ volatile ("li t0, 10\n\t"
        "2:\n\t"
        "addi t0, t0, -1\n\t"
        "bnez t0, 2b\n\t"
        :
        :
        : "t0"
    );
        *LED_REG_ADDR = 0x1;

        __asm__ volatile ("li t0, 10\n\t"
        "2:\n\t"
        "addi t0, t0, -1\n\t"
        "bnez t0, 2b\n\t"
        :
        :
        : "t0"
    );
        *LED_REG_ADDR = 0x2;

        __asm__ volatile ("li t0, 10\n\t"
        "2:\n\t"
        "addi t0, t0, -1\n\t"
        "bnez t0, 2b\n\t"
        :
        :
        : "t0"
    );
        *LED_REG_ADDR = 0x1;

    }
    

    return *RAM_TEST_ADDR;
}
