`define R_TYPE 7'b0110011
`define I_TYPE 7'b0010011
`define U_TYPE_LUI 7'b0110111
`define U_TYPE_AUIPC 7'b0010111
`define M_TYPE_LOAD 7'b0000011
`define M_TYPE_STORE 7'b0100011


`define SIZE_BYTE 2'b00
`define SIZE_HALF_WORD 2'b01
`define SIZE_WORD 2'b11




`define FUNC_3 14:12
`define FUNC_7 31:25

`define RD 11:7
`define RS0 19:15
`define RS1 24:20



`define OP_CODE 6:0


`define FUNC_7_ADD 7'h00
`define FUNC_7_SUB 7'h20
`define FUNC_7_ART 7'h20



`define FUNC_3_ADD 3'b000
`define FUNC_3_SLT 3'b010
`define FUNC_3_SLTU 3'b011
`define FUNC_3_AND 3'b111
`define FUNC_3_OR 3'b110
`define FUNC_3_XOR 3'b100
`define FUNC_3_SHL 3'b001
`define FUNC_3_SHR 3'b101

`define FUNC_3_BYTE 3'b000
`define FUNC_3_HALF_WORD 3'b001
`define FUNC_3_WORD 3'b010

`define FUNC_3_BYTE_U 3'b100
`define FUNC_3_HALF_WORD_U 3'b101












`define EXEC_ADD 5'b00000
`define EXEC_SUB 5'b00001

`define EXEC_CMP 5'b00010
`define EXEC_CMPU 5'b00011

`define EXEC_AND 5'b00100
`define EXEC_OR 5'b00101
`define EXEC_XOR 5'b00110

`define EXEC_SLL 5'b00111
`define EXEC_SRL 5'b01000
`define EXEC_SRA 5'b01001

`define EXEC_ADDI 5'b01010
`define EXEC_CMPI 5'b01011
`define EXEC_CMPIU 5'b01100
`define EXEC_ANDI 5'b01101
`define EXEC_ORI 5'b01110
`define EXEC_XORI 5'b01111

`define EXEC_SLLI 5'b10000
`define EXEC_SRLI 5'b10001
`define EXEC_SRAI 5'b10010

`define EXEC_LUI 5'b10011
`define EXEC_AUIPC 5'b10100


`define EXEC_STORE_BYTE 5'b10101
`define EXEC_STORE_HALF_WORD 5'b10110
`define EXEC_STORE_WORD 5'b10111

`define EXEC_LOAD_BYTE 5'b11000
`define EXEC_LOAD_HALF_WORD 5'b11001
`define EXEC_LOAD_WORD 5'b11010

`define EXEC_LOAD_BYTE_U 5'b11011
`define EXEC_LOAD_HALF_WORD_U 5'b11100




`define EXEC_NOP 5'b11111

