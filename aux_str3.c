#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int count = 0, i, j;
	char *str1, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str1 = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str1 + j);
			*(str1 + j) = *(str1 + (j - 1));
			*(str1 + (j - 1)) = temp;
		}
	}
}

