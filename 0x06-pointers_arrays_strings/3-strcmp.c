#include "main.h"
/**
 * _strcmp -function that compare two string
 * @s1: string to be compared
 * @s2: string to be comapared
 * Return: negative if s1 < s2; 0 if matching and positive int if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
int x;

for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
{
if (s1[x] != s2[x])
return (s1[x] - s2[x]);
}
return (0);
}
