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
	char *h = haystack;
	
	if (!*needle)
	{
		return haystack;
	}
	
	while (*h)
	{
		char *hBegin = h, *n = needle;
		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return hBegin;
		}
		h = hBegin + 1;
	}
	return (0);
}
