#include "main.h"
/**
 * times_table : prints the nine times table starting with 0
 * Return: Always 0
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
product = (x * y);
if (x == 0)
_putchar ('0');

else if (product < 10)
{
_putchar (',');
_putchar (' ');
_putchar (' ');
_putchar ((product % 10) + '0');
}
else
{
_putchar (',');
_putchar (' ');
_putchar((product / 10) + '0');
_putchar ((product % 10) + '0');
}
}
_putchar('\n');
