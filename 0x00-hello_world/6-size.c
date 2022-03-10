#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int firstnumber;
long int number;
long long int dnumber;
char character;
float floatnumber;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(character));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(firstnumber));
printf("Size of long int: %lu bytes(s)\n" (unsigned long)sizeof(number));
printf("Size of long long int: %lu byte(s)\n" (unsigned long)sizeof(dnumber));
printf("Size of a float: %lu byte(s)\n" (unsigned long)sizeof(floatnumber));
return (0);
}
