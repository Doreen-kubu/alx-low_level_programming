#include "main.h"

/**
 * print_diagonal - check for a digit
 * @n : number of \\ to be printed
 * Return:void
 */

void print_diagonal(int n)

{
int space;
int rows;

for (rows = 0; rows < n && n > 0; rows++)

{

for (space = 0; space < rows; space++)
_putchar(' ');


_putchar('\\');
_putchar('\n');
}
if (rows == 0)
_putchar('\n');
}

