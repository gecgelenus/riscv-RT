module RAM(
    input wire clk,
    input wire [31:0] addr,
    input wire [31:0] in,
    input wire [3:0] we,
    output reg [31:0] out
);

reg [31:0] mem [0:32];

wire [7:0] word_addr = addr[9:2];

initial begin
    $readmemh("mem.hex", mem);
end

always @(posedge clk) begin
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

    out <= mem[word_addr];
end

endmodule
