.section .text.init
.global _start
.option norvc

_start:
    li sp, 0x100

    jal ra, main

_exit:
    jal x0, _exit
