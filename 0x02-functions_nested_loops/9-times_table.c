#include "main.h"

/**
 * times_table - prints times table
 * Return:void
 */

void times_table(void)
{
int x, y, product;
/**
 * x = columns
 * y = rows
 */
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
product = (x * y);
  
if (y == 0)
_putchar ('0' + product);

else if (product < 10)
{
_putchar (' ');
_putchar ('0' + product)
}
  
 else
{
_putchar('0' + product / 10);
_putchar('0' + product % 10);
}
if (y < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');

}

}
