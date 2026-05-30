.section .text.init
.global _start
.option norvc

_start:
    li sp, 0x1800
    jal ra, main

_exit:
    jal x0, _exit
