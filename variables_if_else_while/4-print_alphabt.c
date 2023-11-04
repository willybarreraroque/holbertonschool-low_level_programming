#include<stdio.h>
/**
 * main - print lowercase except 'q' and 'e'
 * Return: Always (0)
*/
int main(void)
{
	char letter_low;

	for (letter_low = 'a'; letter_low <= 'z'; letter_low++)
	{
		if (letter_low != 'q' && letter_low != 'e')
		{
			putchar(letter_low);
		}
	}
	putchar('\n');
	return (0);
}
