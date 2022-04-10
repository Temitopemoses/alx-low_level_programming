#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints a number and it's last digit alone with whether its
 * last digit is 0, greater than 5, or less than 6 and not 0.
 * Return: 0
 */
int main(void)
{
int n, lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;
 
 if (lastd > 5)
 {
   printf("last digit of %d is %d and is greater than 5\n", n, lastd);
 }
 else if (lastd == 0)
 {
   printf("last digit of %d is %d and is 0\n", n, lastd);
 {
 else if (lastd  < 6 && lastd != 0)
 {
   printf(last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
 }
return (0);
}
