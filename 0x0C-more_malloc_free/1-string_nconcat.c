#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate strings
 * @s1: first string
 * @s2: second string
 * @n: number of byter of s2 to be concatenated to s1
 * Return: Pointer to newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size, s1_len, s2_len;
	char *new_s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	size = s1_len + n + 1;

	new_s = calloc(size, sizeof(char));

	if (new_s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		new_s[i] = s1[i];
	}

	if (n >= s2_len)
	{
		for (i = 0; i < s2_len; i++)
			new_s[s1_len + i] = s2[i];
	}

	for (i = 0; i < n; i++)
	{

		new_s[s1_len + i] = s2[i];
	}

	new_s[size - 1] = '\0';

	return (new_s);
}
