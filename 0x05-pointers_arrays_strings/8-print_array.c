#include "main.h"
#include <stdio.h>

/**
* print_array : print n elements of an array of integers
* @a : pointer to the inteher to be printed
* @n : integer number of integersto be printed
* description : numbers must be divided by commas
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
