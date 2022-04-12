#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Print numbers 0 to 9 on the line
 * Return: 0
 */
int main(void)
{
int i;
for (i = 0; i < 10; ++i)
putchar('0' + i);
putchar('\n');

return (0);
}
