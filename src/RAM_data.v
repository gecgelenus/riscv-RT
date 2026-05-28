module RAM_data(
    input wire clk,
    input wire sign,
    input wire [31:0] addr,
    input wire [2:0] data_width,
    input wire [3:0] we,

    input wire [31:0] in,
    output reg [31:0] out
);

reg [31:0] mem [0:255];

wire [7:0] word_addr = addr[9:2];

initial begin
    $readmemh("data_mem.hex", mem);
end



always @(*) begin

    if(data_width == `SIZE_BYTE) begin

        case(addr[1:0])
            2'b00: begin
                out[7:0] = mem[word_addr][7:0];
            end

            2'b01: begin
                out[7:0] = mem[word_addr][15:8];
            end

            2'b10: begin
                out[7:0] = mem[word_addr][23:16];
            end

            2'b11: begin
                out[7:0] = mem[word_addr][31:24];
            end
        endcase

        if(sign == 1)begin
            out[31:8] = {24{mem[word_addr][7]}};
        end else begin
            out[31:8] = 24'b0;
        end
    end

    if(data_width == `SIZE_HALF_WORD) begin


        case(addr[1])
            1'b0: begin
                out[15:0] = mem[word_addr][15:0];
            end

            1'b1: begin
                out[15:0] = mem[word_addr][31:16];
            end
        endcase

        if(sign == 1)begin
            out[31:16] = {16{mem[word_addr][15]}};
        end else begin
            out[31:16] = 16'b0;
        end
    end

    if(data_width == `SIZE_WORD) begin
        out = mem[word_addr];
    end

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
end

endmodule
