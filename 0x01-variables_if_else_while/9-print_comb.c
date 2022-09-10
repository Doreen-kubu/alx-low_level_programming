#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int z, comma;
comma = ',';
for (z = '0'; z <= '9'; z++)
{
putchar(z);
if (z <= '8')
putchar(comma);
}

putchar('\n');
return (0);
}
