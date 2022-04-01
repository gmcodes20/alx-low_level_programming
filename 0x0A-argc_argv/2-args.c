#include <stdio.h>


/**
 * main - This Program prints the name of the program
 * @argc: number of arguements
 * @argv: array of arguements
 *
 * Return: An integer
 */

int main(int argc, char *argv[]  )
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;

	}
	return (0);
}
