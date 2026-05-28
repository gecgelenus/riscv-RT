module top(
    input wire clk,
    output reg [5:0] GPIO
);


wire [31:0] PC;

wire [31:0] data_in, data_out, data_addr;
wire [31:0] ins_in, ins_out, ins_addr;

wire [31:0] rs0_addr, rs1_addr, rd_addr;
wire [31:0] rs0_data, rs1_data, rd_data;

wire [5:0] exec_type;
wire [31:0] immediate;
wire reg_we;



wire [2:0] data_mem_width;
wire [3:0] data_mem_we;
wire [31:0] data_mem_addr;
wire data_mem_sign;

wire [31:0] data_mem_in;
wire [31:0] data_mem_out;

wire data_mem_reg_we;
wire [4:0] data_mem_reg_addr;
wire [2:0] data_mem_reg_width;

wire jump_en;
wire [31:0] jump_addr;
wire ins_ready;

wire [31:0] tmpGPIO;
assign GPIO = tmpGPIO[5:0];








wire [31:0] fd_ins;   



wire [3:0] ins_we, data_we;


RAM_data DRAM(
    .clk(clk),
    .addr(data_mem_addr),
    .in(data_mem_in),
    .out(data_mem_out),
    .we(data_mem_we),
    .data_width(data_mem_width),
    .sign(data_mem_sign),
    .GPIO(tmpGPIO)
);

register_file reg_file(
    .clk(clk),
    .rs0_addr(rs0_addr),
    .rs1_addr(rs1_addr),
    .rd_addr(rd_addr),
    .rs0_data(rs0_data),
    .rs1_data(rs1_data),
    .rd_data(rd_data),
    .we(reg_we),

    .mem_we(data_mem_reg_we),
    .reg_addr(data_mem_reg_addr),
    .data_width(data_mem_reg_width),
    .mem_in(data_mem_out)
);

RAM IRAM(
    .clk(clk),
    .addr(ins_addr),
    .in(ins_in),
    .out(ins_out),
    .we(ins_we)
);

fetch_unit FU(
    .clk(clk),
    .ins_in(ins_out),
    .ins_out(fd_ins),
    .ins_ram_addr(ins_addr),
    .jump_addr(jump_addr),
    .jump_en(jump_en),
    .ins_ready(ins_ready)
);

decode_unit DU(
    .clk(clk),
    .fd_ins(fd_ins),
    .rs0(rs0_addr),
    .rs1(rs1_addr),
    .rd(rd_addr),
    .immediate(immediate),
    .exec_type(exec_type)
);

execution_unit EU(
    .clk(clk),
    .exec_type(exec_type),
    .rs0(rs0_data),
    .rs1(rs1_data),
    .rd(rd_data),
    .immediate(immediate),
    .we(reg_we),
    .rd_addr(rd_addr),
    .PC(ins_addr),

    .mem_reg_we(data_mem_reg_we),
    .reg_addr(data_mem_reg_addr),
    .reg_width(data_mem_reg_width),
    .mem_out(data_mem_in),
    
    .mem_we(data_mem_we),
    .mem_addr(data_mem_addr),
    .mem_sign(data_mem_sign),
    .mem_width(data_mem_width),

    .jump_addr(jump_addr),
    .jump_en(jump_en),
    .ins_ready(ins_ready)
);










endmodule
