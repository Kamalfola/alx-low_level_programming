#ifndef 3-MAIN_H
#define 3-MAIN_H
typedef struct
{
	char *c;
	int (*p) (int a, int b);
}op;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
