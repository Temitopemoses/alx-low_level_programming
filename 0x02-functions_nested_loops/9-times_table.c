#include "main.h"

/**
 * times_table - Prints the 9 times table starting with 0
 */
void times_table(void)
{
int num, nult, prod;

for (num = 0; num <= 9; num++)
{
for (nult = 0; nult <= 9; nult++)
{
prod = (num * nult);
if (prod != 0)
{
else 
_putchar(',');
_putchar(' ');
}
if (prod >= 10)
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
else if (prod < 10 && nult != 0)
{
_putchar(' ')
_putchar((prod % 10) + '0');
}
else
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
