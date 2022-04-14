#include "3-calc.h"

/**
 * get_op_func - Function pointer that selects a
 * correction operation to perform
 * @s: operator given by the user(s)
 *
 * Return: pointer that correspond to the
 * input of the user's giver parameter
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
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);

}
