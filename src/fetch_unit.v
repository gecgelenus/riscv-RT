module fetch_unit(
    input wire clk,
    input wire [31:0] ins_in,

    input wire jump_en,
    input wire [31:0] jump_addr,
    
    output wire [31:0] ins_ram_addr,
    output wire [31:0] ins_out,
    
    output reg ins_ready
    );

    reg [31:0] PC;

    initial begin
        PC = 0;
    end


    assign ins_ram_addr = PC;
    assign ins_out = ins_in;

    always @(posedge clk) begin
        if(jump_en == 1) begin
            PC <= jump_addr;
            ins_ready <= 0;
        end else begin
            PC <= PC+4;
            ins_ready <= 1;
            
        end
    end



endmodule
