#include ""main.h"
/**
 * _strncat - concatenates the strings
 * @dest: A pointer to the character that will be changed
 * @src: A pointer to the character that will be changed
 * @n: value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\0')
