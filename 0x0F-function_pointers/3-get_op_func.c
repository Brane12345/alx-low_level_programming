#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * get_op_func - selects the correct function to perform the operation
 *		asked by the user.
 *
 * @s: operator passed as argument to the program.
 *
 * Return: pointer to the corresponding function.
 *         NULL if operator does not match any of the expected operators.
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (ops[i].op)
	{
		if (*ops[i].op == *s && *(s + 1) == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
