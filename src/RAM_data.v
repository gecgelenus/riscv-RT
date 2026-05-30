`include "defines.v"

module RAM_data(
    input wire clk,
    input wire sign,
    input wire [31:0] addr,
    input wire [2:0] data_width,
    input wire [3:0] we,

    input wire [31:0] in,
    output reg [31:0] out,
    output reg [31:0] GPIO
);

reg [31:0] mem [0:1023];

wire [9:0] word_addr = addr[11:2];



wire is_mmio_addr = (addr >= 32'h100);



always @(posedge clk) begin

    out <= mem[word_addr];

    GPIO <= in;
    
    if(we[0] == 1) begin
        mem[word_addr][7:0] <= in[7:0];
    end

    if(we[1] == 1) begin
        mem[word_addr][15:8] <= in[15:8];
    end

    if(we[2] == 1) begin
        mem[word_addr][23:16] <= in[23:16];
    end

    if(we[3] == 1) begin
        mem[word_addr][31:24] <= in[31:24];
    end

    

    
end

endmodule