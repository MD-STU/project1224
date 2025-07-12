#pragma once

class CStack {
public:
	int stack_buff[256];
	int top;
	void stack_push();
	void stack_pop();
	void stack_print();
	void stack_print_file();
	void stack_scanf_file();
};
