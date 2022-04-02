#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>

/**
 * main - This Program prints the name of the program
 * @argc: number of arguements
 * @argv: array of arguements
 *
 * Return: An integer
 */

int main(int argc, char *argv[])
{
	int add = 0,  num, k, j, i;

	if (argc < 2)
	{
		printf("%d\n", 0);

	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		add += num;
	}
	printf("%d\n", add);

	}
	return (0);
}
