#include "main.h"

/**
 * *_strcpy - copies a string to a buffer
 *
 * @dest: the buffer
 * @src: the string to be copied
 *
 * Return: the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len = strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
