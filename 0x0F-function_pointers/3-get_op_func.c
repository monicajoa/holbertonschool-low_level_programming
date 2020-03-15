#include "3-calc.h"
/**
 * get_op_func - returns ptr to the function that corresponds to the operator
 * @s: operator to check the operation to do
 *
 * Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	i = 0;
	while (ops[i].op != '\0')
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
