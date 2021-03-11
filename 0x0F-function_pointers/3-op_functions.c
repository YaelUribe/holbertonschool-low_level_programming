#include "calc.h"
/**
 *op_add - sums two integers
 *@a: integer1
 *@b: integer2
 *Return: product of sum (a + b)
 */
int op_add(int a, int b)
{
	int mas;

	mas = (a + b);
	return (mas);
}
/**
 *op_sub - substraction of two integers
 *@a: integer1
 *@b: integer2
 *Return: product of substraction (a - b)
 */
int op_sub(int a, int b)
{
	int res;

	res = (a - b);
	return (res);
}
/**
 *op_mul - multiplies two integers
 *@a: integer1
 *@b: integer2
 *Return: product of mult (a * b)
 */
int op_mul(int a, int b)
{
	int por;

	por = (a * b);
	return (por);
}
/**
 *op_div - divides two integers
 *@a: integer1
 *@b: integer2
 *Return: product of division (a / b)
 */
int op_div(int a, int b)
{
	int divis;

	divis = (a / b);
	return (divis);
}
/**
 *op_mod - modulo of two integers
 *@a: integer1
 *@b: integer2
 *Return: product of modulo (a % b)
 */
int op_mod(int a, int b)
{
	int porc;

	porc = (a % b);
	return (porc);
}
