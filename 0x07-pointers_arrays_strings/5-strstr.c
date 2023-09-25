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
	char *p1 = haystack;
    while (*p1) {
        char *p1Begin = p1, *p2 = needle;
        while (*p1 && *p2 && *p1 == *p2) {
            p1++;
            p2++;
        }

        if (!*p2) {
            return p1Begin;
        }
	p1 = p1Begin + 1;
    }
    return NULL;
}
