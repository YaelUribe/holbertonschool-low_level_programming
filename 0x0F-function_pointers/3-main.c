#include "3-calc.h"
/**
 *main - Entry point
 *@argc: counting argument
 *@argv: vector argument
 *Return: Result of operation
 */
int main(int argc, char *argv[])
{
	int q, r;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	p = get_op_func(argv[2]);
	if (0 == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	q = atoi(argv[1]);
	r = atoi(argv[3]);
	printf("%d\n", p(q, r));
	return (0);
}
