`include "defines.v"

module execution_unit(
    input wire clk,
    input wire [31:0] PC,
    input wire [5:0] exec_type,
    input wire [31:0] rs0,
    input wire [31:0] rs1,
    input wire [4:0] rd_addr,
    input wire [31:0] immediate,
    output reg [31:0] rd,
    input wire ins_ready,
    output reg we,

    output reg mem_reg_we,
    output reg [4:0] reg_addr,
    output reg [2:0] reg_width,
    
    output reg [3:0] mem_we,
    output reg [31:0] mem_addr,
    output reg [31:0] mem_out,
    output reg [2:0] mem_width,
    output reg mem_sign,

    output reg jump_en,
    output reg [31:0] jump_addr
);

wire [31:0] target_addr = $signed(rs0)+$signed(immediate);


    always @(*) begin
        we = 0;
        mem_reg_we = 0;
        mem_we = 0;
        mem_out = 0;
        jump_en = 0;
        mem_addr = 0;

    if(ins_ready == 1) begin
            case(exec_type)
                `EXEC_ADD: begin
                    we = 1;
                    rd = $signed(rs0) + $signed(rs1);
                end

                `EXEC_SUB: begin
                    we = 1;
                    rd = $signed(rs0) - $signed(rs1);
                end

                `EXEC_CMPU: begin
                    we = 1;
                    if(rs0 < rs1) begin
                        rd = 1;
                    end else begin
                        rd = 0;
                    end
                end

                `EXEC_CMP: begin
                    we = 1;
                    if($signed(rs0) < $signed(rs1)) begin
                        rd = 1;
                    end else begin
                        rd = 0;
                    end
                end

                `EXEC_AND: begin
                    we = 1;
                    rd = rs0 & rs1;
                end

                `EXEC_OR: begin
                    we = 1;
                    rd = rs0 | rs1;
                end

                `EXEC_XOR: begin
                    we = 1;
                    rd = rs0 ^ rs1;
                end

                `EXEC_SLL: begin
                    we = 1;
                    rd = rs0 << rs1;
                end

                `EXEC_SRL: begin
                    we = 1;
                    rd = rs0 >> rs1;
                end

                `EXEC_SRA: begin
                    we = 1;
                    rd = $signed(rs0) >>> rs1;
                end

                `EXEC_ADDI: begin
                    we = 1;
                    rd = rs0 + $signed({{20{immediate[11]}},{immediate[11:0]}});
                end

                `EXEC_CMPI: begin
                    we = 1;
                    if($signed(rs0) < $signed(immediate)) begin
                        rd = 1;
                    end else begin
                        rd = 0;
                    end
                end

                `EXEC_CMPIU: begin
                    we = 1;
                    if(rs0 < immediate) begin
                        rd = 1;
                    end else begin
                        rd = 0;
                    end
                end

                `EXEC_ANDI: begin
                    we = 1;
                    rd = rs0 & immediate;
                end

                `EXEC_ORI: begin
                    we = 1;
                    rd = rs0 | immediate;
                end

                `EXEC_XORI: begin
                    we = 1;
                    rd = rs0 ^ immediate;
                end

                `EXEC_SLLI: begin
                    we = 1;
                    rd = rs0 << immediate[4:0];
                end

                `EXEC_SRLI: begin
                    we = 1;
                    rd = rs0 >> immediate[4:0];
                end

                `EXEC_SRAI: begin
                    we = 1;
                    rd = $signed(rs0) >>> immediate[4:0];
                end

                `EXEC_LUI: begin
                    we = 1;
                    rd = {immediate[31:12], 12'b0};
                end

                `EXEC_AUIPC: begin
                    we = 1;
                    rd = (PC-4) + {immediate[31:12], 12'b0};
                end

                `EXEC_LOAD_BYTE: begin
                    mem_reg_we = 1;
                    reg_addr = rd_addr;
                    reg_width = `SIZE_BYTE;

                    mem_addr = rs0+$signed(immediate[31:20]);
                    mem_width = `SIZE_BYTE;
                    mem_sign = 1;

                end


                `EXEC_LOAD_BYTE_U: begin
                    mem_reg_we = 1;
                    reg_addr = rd_addr;
                    reg_width = `SIZE_BYTE;

                    mem_addr = rs0+$signed(immediate[31:20]);
                    mem_width = `SIZE_BYTE;
                    mem_sign = 0;

                end

                `EXEC_LOAD_HALF_WORD: begin
                    mem_reg_we = 1;
                    reg_addr = rd_addr;
                    reg_width = `SIZE_HALF_WORD;

                    mem_addr = rs0+$signed(immediate[31:20]);
                    mem_width = `SIZE_HALF_WORD;
                    mem_sign = 1;

                end

                `EXEC_LOAD_HALF_WORD_U: begin
                    mem_reg_we = 1;
                    reg_addr = rd_addr;
                    reg_width = `SIZE_HALF_WORD;

                    mem_addr = rs0+immediate[31:20];
                    mem_width = `SIZE_HALF_WORD;
                    mem_sign = 0;
                end

                `EXEC_LOAD_WORD: begin
                    mem_reg_we = 1;
                    reg_addr = rd_addr;
                    reg_width = `SIZE_WORD;

                    mem_addr = $signed(rs0)+$signed(immediate[31:20]);
                    mem_width = `SIZE_WORD;
                    mem_sign = 0;
                end

                `EXEC_STORE_BYTE: begin

                    mem_reg_we = 0;
                    case(target_addr[1:0])
                        2'b00: begin
                            mem_out = {{24{1'b0}},{rs1[7:0]}};
                            mem_we = 4'b0001;
                        end

                        2'b01: begin
                            mem_out = {{16{1'b0}},{rs1[7:0]},{8{1'b0}}};
                            mem_we = 4'b0010;

                        end

                        2'b10: begin
                            mem_out = {{8{1'b0}},{rs1[7:0]},{16{1'b0}}};
                            mem_we = 4'b0100;
                        end

                        2'b11: begin
                            mem_out = {{rs1[7:0]},{24{1'b0}}};
                            mem_we = 4'b1000;
                        end
                    
                    endcase

                    reg_width = `SIZE_BYTE;

                    mem_addr = rs0+$signed(immediate[11:0]);
                    mem_width = `SIZE_BYTE;
                    mem_sign = 0;
                end

                `EXEC_STORE_HALF_WORD: begin
                    mem_reg_we = 0;
                    case(target_addr[1])
                        1'b0: begin
                            mem_out = {{16{1'b0}},{rs1[15:0]}};
                            mem_we = 4'b0011;
                        end

                        1'b1: begin
                            mem_out = {{rs1[15:0]},{16{1'b0}}};
                            mem_we = 4'b1100;
                        end
                    
                    endcase

                    reg_width = `SIZE_HALF_WORD;

                    mem_addr = rs0+$signed(immediate[11:0]);
                    mem_width = `SIZE_HALF_WORD;
                    mem_sign = 0;
                end

                `EXEC_STORE_WORD: begin
                    mem_reg_we = 0;
                    mem_out = rs1;
                    reg_width = `SIZE_WORD;

                    mem_addr = $signed(rs0)+$signed(immediate[11:0]);
                    mem_width = `SIZE_WORD;
                    mem_sign = 0;
                    mem_we = 4'b1111;
                end

                `EXEC_JUMP_OFFSET: begin
                    jump_en = 1;
                    rd = PC;
                    we = 1;
                    jump_addr = PC - 4 + $signed(immediate);
                end

                `EXEC_JUMP_REG: begin
                    jump_en = 1;
                    rd = PC;
                    we = 1;
                    jump_addr = rs0 + $signed(immediate);
                end

                `EXEC_BEQ: begin
                    jump_en = 1;
                    if(rs0 == rs1) begin
                        jump_addr = PC - 4 + $signed(immediate);                    
                    end else begin
                        jump_addr = PC; 
                    end

                end

                `EXEC_BNE: begin
                    jump_en = 1;
                    if(rs0 != rs1) begin
                        jump_addr = PC - 4 + $signed(immediate);                    
                    end else begin
                        jump_addr = PC; 
                    end

                end

                `EXEC_BLT: begin
                    jump_en = 1;
                    if($signed(rs0) < $signed(rs1)) begin
                        jump_addr = PC - 4 + $signed(immediate);                    
                    end else begin
                        jump_addr = PC; 
                    end

                end

                `EXEC_BLTU: begin
                    jump_en = 1;
                    if(rs0 < rs1) begin
                        jump_addr = PC - 4 + immediate;                    
                    end else begin
                        jump_addr = PC; 
                    end

                end

                `EXEC_BGE: begin
                    jump_en = 1;
                    if($signed(rs0) >= $signed(rs1)) begin
                        jump_addr = PC - 4 + $signed(immediate);                    
                    end else begin
                        jump_addr = PC; 
                    end

                end

                `EXEC_BGEU: begin
                    jump_en = 1;
                    if(rs0 >= rs1) begin
                        jump_addr = PC - 4 + immediate;                    
                    end else begin
                        jump_addr = PC; 
                    end
                end

                default: begin
                    we = 0;
                    mem_reg_we = 0;
                    mem_we = 0;
                end
            endcase
    end

    end




endmodule
