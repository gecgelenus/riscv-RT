module register_file(
    input wire clk,
    input wire [4:0] rs0_addr,
    input wire [4:0] rs1_addr,
    input wire [4:0] rd_addr,
    input wire [31:0] rd_data,
    input wire we,
    output reg [31:0] rs0_data,
    output reg [31:0] rs1_data,

    input wire mem_we,
    input wire [4:0] reg_addr,
    input wire [2:0] data_width,
    input wire [31:0] mem_in,


);

    reg [31:0] regs [31:0];


    assign rs0_data = (rs0_addr == 5'b0) ? 32'b0 : regs[rs0_addr];
    assign rs1_data = (rs1_addr == 5'b0) ? 32'b0 : regs[rs1_addr];

    

    always @(posedge clk) begin
        
        if(we == 1) begin
            regs[rd_addr] <= rd_data;
        end else if (mem_we == 1) begin
            regs[reg_addr] <= mem_in;
        end
    end


endmodule
