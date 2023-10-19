#include<stdio.h>
/**
 * main - Entry point
 *
 * Description:"Print size of variables"
 * Return: Always 0 (Success)
 */

int main(void)
{
	char caracteres;
	int entero;
	long int entero_largo;
	long long int entero_largo_largo;
	float flotante;

	printf("Size of a char: %ld byte(s)\n", sizeof(caracteres));
	printf("Size of a int: %ld byte(s)\n", sizeof(entero));
	printf("Size of a long int: %ld byte(s)\n", sizeof(entero_largo));
	printf("Size of a long int: %ld byte(s)\n", sizeof(entero_largo_largo));
	printf("Size of a float: %ld byte(s)\n", sizeof(flotante));
	return (0);
}
