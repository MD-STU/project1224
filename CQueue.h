#pragma once
#define MAXSIZE 10
class CQueue {
public:
	int queue[MAXSIZE];
	int front, rear;
	void init_queue(void);
	void clear_queue(void);
	int put(int val);
	int get(void);
	void print_queue(void);
	void queue_printf_file();
	void queue_scanf_file();
};