#include "main.h"
/**
 * is_palindrome - function to check for palindrome
 * @s: pointer to string
 * Return: 1 or 0
 * Code by Linus Obura
 */
char *get_end(char *s);
int palindrome_helper(char *start, char *end);

int is_palindrome(char *s)
{
	char *end = get_end(s);

	return (palindrome_helper(s, end));
}

/**
 * palindroma_helper - helper to the is_palindrome function
 * @start: pointer to the start of a string
 * @end: Pointer to the end of the screen
 * Retur: 0 / start /end
 */
int palindrome_helper(char *start, char *end)
{
	if (*start != *end)
	{
		return (0);
	}
	if (start >= end)
	{
		return (1);
	}
	return (palindrome_helper(start + 1, end - 1));
}

/**
 * get_end - get string end
 * @s: string
 * Return: end
 */
char *get_end(char *s)
{
	if (*s == '\0' || *(s + 1) == '\0')
	{
		return (s);
	}

	return (get_end(s + 1));
}
