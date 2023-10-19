#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n=rand()%1000000000;

	srand(time(NULL));
	printf("%d\n",rand());

}
