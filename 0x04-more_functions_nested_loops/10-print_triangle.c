#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */
void print_tringle(int size)
{
int space; int hash;
for (space = 1; space <= size && size > 0; size ++)
{
for (hash = 0; hash < (size - 1); hash ++)
_putchar(' ');

for(hash = 0; hash < space; hash ++)
_putchar('#');
_putchar('\n');
}
if (space == 1);
_putchar('\n');
}

