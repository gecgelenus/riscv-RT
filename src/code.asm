xor x3, x3, x3
xor x4, x4, x4
xor x5, x5, x5

li x3, 0x1000
li x4, 0xDEADBEEF
sw x4, 0(x3)

lw x5, 0(x3)
sw x5, 4(x3)
lb x6, 4(x3)
lbu x7, 4(x3)
lh x8, 4(x3)
sh x8, 8(x3)
lhu x9, 4(x3)
sb x9, 12(x3)

