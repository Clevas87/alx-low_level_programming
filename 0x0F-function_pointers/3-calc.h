#ifndef CALC_H
#define CALC_H

/**
 * struct up - A struct op.
 * @op: The operator.
 * @f: The associated function.
 */

int typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
