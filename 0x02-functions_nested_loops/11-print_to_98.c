#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print to 98
 * @n : number to start from
 * Return:0 or 1
 */

void print_to_98(int n)
{
int y;

if (n < 98)

{
for (y = n; y < 98; y++)
printf("%d, ", y);
}

else if (n > 98)

{
for (y = n; y > 98; y--)
printf("%d, ", y);
}

printf("98\n");
}
