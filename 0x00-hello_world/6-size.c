#include<stdio.h>
/**
 * main - print out sizes of data in C
 * code by Chidimma
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	Printf("size of a int: %lu byte(S)\n", (unsigned long)sizeof(b));
	Printf("size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	Printf("size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	Printf("size of a float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
