#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print lowercase alphabet excluding q and e
 * Return: 0
 */
int main(void)
{
char c;

for (c = 'a'; c <= '2' ++c)
{
if (c != 'e' && c != 'q')
putchar(c);
}

putchar('\n');

return (0);
}
