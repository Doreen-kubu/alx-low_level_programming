#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, last_no;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
last_no = n % 10;
if (last_no == 0)
printf("Last digit of %d is %d and is 0\n", n, last_no);
else if (last_no > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last_no);
else
printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, last_no);
/* your code goes there */
return (0);
}
