#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
int x;

x = 0;
for (n--; n >= 0; n--, n++)

{
printf("%d", a[x]);
if (n > 0)
printf(", ");

}
putchar('\n');

}
