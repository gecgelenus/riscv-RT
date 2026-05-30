`include "defines.v"



module execution_unit(
    input wire clk,
    input wire [31:0] PC,
    
    input wire [5:0] exec_type,
    input wire ins_ready,

    input wire [31:0] rs0_data,
    input wire [31:0] rs1_data,
    input wire [31:0] immediate,

    input wire [4:0] rd_addr,

    output reg we,
    output reg mem_reg_we,
    output reg [3:0] mem_we,
    
    output reg [4:0] reg_addr,
    output reg [2:0] reg_width,
    
    output reg [31:0] mem_addr,
    output reg [2:0] mem_width,
    output reg [31:0] mem_out,
    output reg mem_sign,

    output reg jump_en,
    output reg [31:0] jump_addr,
    
    output reg [31:0] rd_data

);

wire [31:0] target_addr = $signed(rs0_data)+$signed(immediate);

wire [31:0] tmp = {immediate[31:12], 12'b0};
wire [31:0] signed_addr_load = $signed(rs0_data)+$signed(immediate[31:20]);
wire [31:0] unsigned_addr_load = rs0_data+immediate[31:20];
wire [31:0] addr_store = $signed(rs0_data)+$signed(immediate[11:0]);


wire [31:0] jump_addr_precalc = PC - 4 + $signed(immediate);

reg [4:0] last_reg_addr;
wire [4:0] tmp_last_reg_addr;

always @(negedge clk) begin
    last_reg_addr <= tmp_last_reg_addr;
end


    always @(*) begin
        we = 0;
        mem_reg_we = 0;
        mem_we = 0;

        mem_out = 0;
        mem_addr = 0;

        rd_data = 0;

        jump_en = 0;
        jump_addr = 0;

        reg_addr = 0;
        reg_width = 0;
        mem_width = 0;
        mem_sign = 0;

    if(ins_ready == 1) begin
            case(exec_type)
                `EXEC_ADD: begin
                    we = 1;
                    rd_data = $signed(rs0_data) + $signed(rs1_data);
                end

                `EXEC_SUB: begin
                    we = 1;
                    rd_data = $signed(rs0_data) - $signed(rs1_data);
                end

                `EXEC_CMPU: begin
                    we = 1;
                    if(rs0_data < rs1_data) begin
                        rd_data = 1;
                    end else begin
                        rd_data = 0;
                    end
                end

                `EXEC_CMP: begin
                    we = 1;
                    if($signed(rs0_data) < $signed(rs1_data)) begin
                        rd_data = 1;
                    end else begin
                        rd_data = 0;
                    end
                end

                `EXEC_AND: begin
                    we = 1;
                    rd_data = rs0_data & rs1_data;
                end

                `EXEC_OR: begin
                    we = 1;
                    rd_data = rs0_data | rs1_data;
                end

                `EXEC_XOR: begin
                    we = 1;
                    rd_data = rs0_data ^ rs1_data;
                end

                `EXEC_SLL: begin
                    we = 1;
                    rd_data = rs0_data << rs1_data;
                end

                `EXEC_SRL: begin
                    we = 1;
                    rd_data = rs0_data >> rs1_data;
                end

                `EXEC_SRA: begin
                    we = 1;
                    rd_data = $signed(rs0_data) >>> rs1_data;
                end

                `EXEC_ADDI: begin
                    we = 1;
                    rd_data = rs0_data + $signed({{20{immediate[11]}},{immediate[11:0]}});
                end

                `EXEC_CMPI: begin
                    we = 1;
                    if($signed(rs0_data) < $signed(immediate)) begin
                        rd_data = 1;
                    end else begin
                        rd_data = 0;
                    end
                end

                `EXEC_CMPIU: begin
                    we = 1;
                    if(rs0_data < immediate) begin
                        rd_data = 1;
                    end else begin
                        rd_data = 0;
                    end
                end

                `EXEC_ANDI: begin
                    we = 1;
                    rd_data = rs0_data & immediate;
                end

                `EXEC_ORI: begin
                    we = 1;
                    rd_data = rs0_data | immediate;
                end

                `EXEC_XORI: begin
                    we = 1;
                    rd_data = rs0_data ^ immediate;
                end

                `EXEC_SLLI: begin
                    we = 1;
                    rd_data = rs0_data << immediate[4:0];
                end

                `EXEC_SRLI: begin
                    we = 1;
                    rd_data = rs0_data >> immediate[4:0];
                end

                `EXEC_SRAI: begin
                    we = 1;
                    rd_data = $signed(rs0_data) >>> immediate[4:0];
                end

                `EXEC_LUI: begin
                    we = 1;
                    rd_data = tmp;
                end

                `EXEC_AUIPC: begin
                    we = 1;
                    rd_data = (PC-4) + tmp;
                end

                `EXEC_LOAD_BYTE: begin
                    mem_reg_we = 1;
                    reg_addr = rd_addr;
                    reg_width = `SIZE_BYTE;

                    mem_addr = signed_addr_load;
                    mem_width = `SIZE_BYTE;
                    mem_sign = 1;

                end


                `EXEC_LOAD_BYTE_U: begin
                    mem_reg_we = 1;
                    reg_addr = rd_addr;
                    reg_width = `SIZE_BYTE;

                    mem_addr = unsigned_addr_load;
                    mem_width = `SIZE_BYTE;
                    mem_sign = 0;


                end

                `EXEC_LOAD_HALF_WORD: begin
                    mem_reg_we = 1;
                    reg_addr = rd_addr;
                    reg_width = `SIZE_HALF_WORD;

                    mem_addr = signed_addr_load;
                    mem_width = `SIZE_HALF_WORD;
                    mem_sign = 1;

                end

                `EXEC_LOAD_HALF_WORD_U: begin
                    mem_reg_we = 1;
                    reg_addr = rd_addr;
                    reg_width = `SIZE_HALF_WORD;

                    mem_addr = unsigned_addr_load;
                    mem_width = `SIZE_HALF_WORD;
                    mem_sign = 0;

                end

                `EXEC_LOAD_WORD: begin
                    mem_reg_we = 1;
                    reg_addr = rd_addr;
                    reg_width = `SIZE_WORD;

                    mem_addr = signed_addr_load;
                    mem_width = `SIZE_WORD;
                    mem_sign = 0;

                end

                `EXEC_STORE_BYTE: begin

                    mem_reg_we = 0;
                    case(target_addr[1:0])
                        2'b00: begin
                            mem_out = {{24{1'b0}},{rs1_data[7:0]}};
                            mem_we = 4'b0001;
                        end

                        2'b01: begin
                            mem_out = {{16{1'b0}},{rs1_data[7:0]},{8{1'b0}}};
                            mem_we = 4'b0010;

                        end

                        2'b10: begin
                            mem_out = {{8{1'b0}},{rs1_data[7:0]},{16{1'b0}}};
                            mem_we = 4'b0100;
                        end

                        2'b11: begin
                            mem_out = {{rs1_data[7:0]},{24{1'b0}}};
                            mem_we = 4'b1000;
                        end
                    
                    endcase

                    reg_width = `SIZE_BYTE;

                    mem_addr = addr_store;
                    mem_width = `SIZE_BYTE;
                    mem_sign = 0;
                end

                `EXEC_STORE_HALF_WORD: begin
                    mem_reg_we = 0;
                    case(target_addr[1])
                        1'b0: begin
                            mem_out = {{16{1'b0}},{rs1_data[15:0]}};
                            mem_we = 4'b0011;
                        end

                        1'b1: begin
                            mem_out = {{rs1_data[15:0]},{16{1'b0}}};
                            mem_we = 4'b1100;
                        end
                    
                    endcase

                    reg_width = `SIZE_HALF_WORD;

                    mem_addr = addr_store;
                    mem_width = `SIZE_HALF_WORD;
                    mem_sign = 0;
                end

                `EXEC_STORE_WORD: begin
                    mem_reg_we = 0;
                    mem_out = rs1_data;
                    reg_width = `SIZE_WORD;

                    mem_addr = addr_store;
                    mem_width = `SIZE_WORD;
                    mem_sign = 0;
                    mem_we = 4'b1111;
                end

                `EXEC_JUMP_OFFSET: begin
                    jump_en = 1;
                    rd_data = PC;
                    we = 1;
                    jump_addr = jump_addr_precalc;
                end

                `EXEC_JUMP_REG: begin
                    jump_en = 1;
                    rd_data = PC;
                    we = 1;
                    jump_addr = rs0_data + $signed(immediate);
                end

                `EXEC_BEQ: begin
                    jump_en = 1;
                    if(rs0_data == rs1_data) begin
                        jump_addr = jump_addr_precalc;                   
                    end else begin
                        jump_addr = PC; 
                    end

                end

                `EXEC_BNE: begin
                    jump_en = 1;
                    if(rs0_data != rs1_data) begin
                        jump_addr = jump_addr_precalc;                    
                    end else begin
                        jump_addr = PC; 
                    end

                end

                `EXEC_BLT: begin
                    jump_en = 1;
                    if($signed(rs0_data) < $signed(rs1_data)) begin
                        jump_addr = jump_addr_precalc;                    
                    end else begin
                        jump_addr = PC; 
                    end

                end

                `EXEC_BLTU: begin
                    jump_en = 1;
                    if(rs0_data < rs1_data) begin
                        jump_addr = jump_addr_precalc;                    
                    end else begin
                        jump_addr = PC; 
                    end

                end

                `EXEC_BGE: begin
                    jump_en = 1;
                    if($signed(rs0_data) >= $signed(rs1_data)) begin
                        jump_addr = jump_addr_precalc;                    
                    end else begin
                        jump_addr = PC; 
                    end

                end

                `EXEC_BGEU: begin
                    jump_en = 1;
                    if(rs0_data >= rs1_data) begin
                        jump_addr = jump_addr_precalc;                    
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
    end else begin
    
    end

    end




endmodule
