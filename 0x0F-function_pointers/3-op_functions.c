#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add -this will Returns the sum of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: it will return the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: it will return the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of two operands.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: this returns the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two operands.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: returns quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - the remainder of the division of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: returns remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
