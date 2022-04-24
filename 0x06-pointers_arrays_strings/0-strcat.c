#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: second string to be concatenated to src
 * @src: first string to be concatenated to dest
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (ddest[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0')
{
dest[i] = src [j];
j++;
i++
}
dest[i] = '\0';

return (dest);
}
