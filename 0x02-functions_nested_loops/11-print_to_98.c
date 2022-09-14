#include <stdio.h>
#include "main.h"
/*
 * print_to_98: prints all natural mumbers from 9 t0 98
 * return: always zero
 */
void print_to_98(int n)
{
int n;
int y;

if (n < 98)

{
for (y = n; y < 98; y++)
printf("%d, ,", y);
}

else if (n > 98)

{
for (y = n; y > 98; y--)
printf("%d, ,", y);
}

printf("98\n");
}
