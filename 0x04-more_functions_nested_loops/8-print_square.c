#include "main.h"

/**
 * print_square - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */
void print_square(int size)
{
int y;
int x;
if (size <= 0)
putchar('\n');

else
{
for(y = 1; y <= size; y++)
{

for (x = 1; x <= size; x++)
putchar('#');
putchar('\n');

}

}

}


