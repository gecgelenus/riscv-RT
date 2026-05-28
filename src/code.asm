    xor x2, x2, x2
    xor x3, x3, x3
    xor x4, x4, x4
    xor x5, x5, x5
    xor x6, x6, x6


    addi x2, x2, 10
    addi x3, x3, -4
    addi x4, x4, 10

    beq x2, x4, P1
    jal x1, FAIL
P1:
    bne x2, x4, FAIL

    blt x3, x2, P2
    addi x6, x6, 1
P2:
    bge x3, x2, FAIL
    bltu x3, x2, FAIL

    bgeu x3, x2, P3
    addi x6, x6, 1
P3:
    bgeu x2, x4, P4
    addi x6, x6, 1

P4:
    bge x2, x4, P5
    addi x6, x6, 1

P5:
    addi x10, x10, 31








FAIL:
    addi x6, x6, 1
    


