#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * cp_add - Return the sum ot two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Return the difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
return (a - b);
}


/**
 * op_mul - Return the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of a and b.
 */

int op_mul(int a. int b)
{
return (a * b);
}

/**
 * op_div - Return the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - Return the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of division of a and b.
 */

int op_mod(int a, int b)
{
return (a % b);
}
