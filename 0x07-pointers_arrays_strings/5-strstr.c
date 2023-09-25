#include "main.h"
/**
 * _strstr - function to find the occurence of a substring
 * @haystack: main string in which search is performed
 * @needle: the substring to be searched
 * Return: pointer to beggining of  substring
 * Code by Linus Obura
 */
char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
	{
		return haystack;
	}
	char *h = haystack;
	
	while (*h)
	{
		char *hBegin = h, *n = needle;
		while (*h && *n && *h == *n)
		{
			h++;
			d++;
		}
		if (!*d)
		{
			return p1Begin;
		}
		h = hBegin + 1;
	}
	return (0);
}
