#include "main.h"

void more_numbers(void)

{
int x, y, z;

for (y = 0; y <= 9; y++)

{
for (x = 0; x <= 14; x++)
 
{
if (x <= 9)
z = x;

if (x > 9)

{
z = (x % 10);
_putchar('1');
}

_putchar(z + '0');
}

_putchar('\n');
}

}

