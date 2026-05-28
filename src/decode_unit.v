`include "defines.v"

module decode_unit(
    input wire clk,
    input wire [31:0] fd_ins,
    output reg [4:0] exec_type,
    output wire [4:0] rs0,
    output wire [4:0] rs1,
    output wire [4:0] rd,
    output wire [31:0] immediate
);

assign rs0 = fd_ins[`RS0];
assign rs1 = fd_ins[`RS1];
assign rd = fd_ins[`RD];

always @(*) begin
    case (fd_ins[6:0])
        `R_TYPE: begin
            
            
            case(fd_ins[`FUNC_3]) 
                `FUNC_3_ADD: begin
                    if(fd_ins[`FUNC_7] == `FUNC_7_ADD) begin
                        exec_type = `EXEC_ADD;
                    end else if(fd_ins[`FUNC_7] == `FUNC_7_SUB) begin
                        exec_type = `EXEC_SUB;
                    end else begin
                        exec_type = `EXEC_NOP;
                    end
                end

                `FUNC_3_SLT: begin
                    exec_type = `EXEC_CMP;
                end

                `FUNC_3_SLTU: begin
                    exec_type = `EXEC_CMPU;
                end

                `FUNC_3_AND: begin
                    exec_type = `EXEC_AND;
                end

                `FUNC_3_OR: begin
                    exec_type = `EXEC_OR;
                end

                `FUNC_3_XOR: begin
                    exec_type = `EXEC_XOR;
                end

                `FUNC_3_XOR: begin
                    exec_type = `EXEC_XOR;
                end

                `FUNC_3_SHL: begin
                    exec_type = `EXEC_SLL;
                end

                `FUNC_3_SHR: begin
                    if(fd_ins[`FUNC_7] == `FUNC_7_ART) begin
                        exec_type = `EXEC_SRA;
                    end else begin
                        exec_type = `EXEC_SRL;
                    end
                end

                default: begin
                    exec_type = `EXEC_NOP;
                end
            endcase
        end 

        
        `I_TYPE: begin


            immediate = fd_ins[31:20];
            case(fd_ins[`FUNC_3]) 
                `FUNC_3_ADD: begin
                    exec_type = `EXEC_ADDI;
                end

                `FUNC_3_SLT: begin
                    exec_type = `EXEC_CMPI;
                end

                `FUNC_3_SLTU: begin
                    exec_type = `EXEC_CMPIU;
                end

                `FUNC_3_AND: begin
                    exec_type = `EXEC_ANDI;
                end

                `FUNC_3_OR: begin
                    exec_type = `EXEC_ORI;
                end

                `FUNC_3_XOR: begin
                    exec_type = `EXEC_XORI;
                end

                `FUNC_3_SHL: begin
                    exec_type = `EXEC_SLLI;
                end

                `FUNC_3_SHR: begin
                    if(fd_ins[`FUNC_7] == `FUNC_7_ART) begin
                        exec_type = `EXEC_SRAI;
                    end else begin
                        exec_type = `EXEC_SRLI;
                    end
                end

            
            endcase
        end

        `U_TYPE_LUI: begin
                    immediate = fd_ins;
                    exec_type = `EXEC_LUI;
                end

        `U_TYPE_AUIPC: begin
            immediate = fd_ins;
            exec_type = `EXEC_AUIPC;
        end

        `M_TYPE_LOAD: begin
            immediate = fd_ins;

            case(fd_ins[`FUNC_3]) 
                `FUNC_3_BYTE: begin
                    exec_type = `EXEC_LOAD_BYTE;
                end

                `FUNC_3_BYTE_U: begin
                    exec_type = `EXEC_LOAD_BYTE_U;
                end

                `FUNC_3_HALF_WORD: begin
                    exec_type = `EXEC_LOAD_HALF_WORD;
                end

                `FUNC_3_HALF_WORD_U: begin
                    exec_type = `EXEC_LOAD_HALF_WORD_U;
                end

                `FUNC_3_WORD: begin
                    exec_type = `EXEC_LOAD_WORD;
                end

            endcase
        end

        `M_TYPE_STORE: begin
            immediate = {{20{1'b0}},{fd_ins[31:25]},{fd_ins[11:7]}};

            case(fd_ins[`FUNC_3]) 
                `FUNC_3_BYTE: begin
                    exec_type = `EXEC_STORE_BYTE;
                end

                `FUNC_3_HALF_WORD: begin
                    exec_type = `EXEC_STORE_HALF_WORD;
                end

                `FUNC_3_WORD: begin
                    exec_type = `EXEC_STORE_WORD;
                end

            endcase
        end

        default:begin
            exec_type = `EXEC_NOP;
        end

    endcase

    


end




endmodule
