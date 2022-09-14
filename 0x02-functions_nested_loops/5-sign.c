#include "main.h"
/**
 * print_sign - Entry point
 * n - carrier variable
 * Return 1 if n > 1, return 0 if n == 0 and -1 if n<1
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}

else if (n < 0)
{
putchar('-');
return (-1);
}

else
{
putchar('0');
return (0);
}
}
