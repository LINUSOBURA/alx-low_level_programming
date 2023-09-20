#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: zero
 * Code by Linus Obura
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int s1_len = 0;
	int s2_len = 0;
	int difference;

	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;

	for (i = 0; i <= s1_len && i <= s2_len; i++)
	{
		if (s1[i] != s2[i])
		{
			difference = s1[i] - s2[i];
			return (difference);
		}

	}

	return (0);
}
