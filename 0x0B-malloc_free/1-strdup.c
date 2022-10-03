#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	/* chech if str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	/*check if malloc was successful*/
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
