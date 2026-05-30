module register_file(
    input wire clk,
    input wire [4:0] rs0_addr,
    input wire [4:0] rs1_addr,
    input wire [4:0] rd_addr,
    input wire [31:0] rd_data,
    input wire we,
    output wire [31:0] rs0_data,
    output wire [31:0] rs1_data,

    input wire mem_we,
    input wire [4:0] reg_addr,
    input wire [2:0] data_width,
    input wire [31:0] mem_in
);

   reg [31:0] regs [31:0];


    assign rs0_data = (rs0_addr == 5'b0) ? 32'b0 : regs[rs0_addr];
    assign rs1_data = (rs1_addr == 5'b0) ? 32'b0 : regs[rs1_addr];

    reg mem_wait;
    reg [4:0] tmp_reg_addr;

    

    always @(posedge clk) begin
        mem_wait <= 0;

        if(mem_wait == 1) begin
            mem_wait <= 0;
            regs[tmp_reg_addr] <= mem_in;
        end

        if(we == 1) begin
            regs[rd_addr] <= rd_data;
        end else if (mem_we == 1) begin
            tmp_reg_addr <= reg_addr;
            mem_wait <= 1;
        end

        
    end


endmodule
