module fetch_unit(
    input wire clk,
    input wire [31:0] PC,
    input wire [31:0] ins_in,
    output wire [31:0] ins_ram_addr,
    output wire [31:0] ins_out
);


    assign ins_ram_addr = PC;
    assign ins_out = ins_in;



endmodule
