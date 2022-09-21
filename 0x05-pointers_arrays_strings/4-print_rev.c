#include "main.h"
/**
 * print_rev : prints a string in reverse followedby a newline
 * @s ; pointer to the string to print
 * Return : void
 */
void print_rev(char *s)
{
int i = 0;

while (s[i])
i++;

for (;; i--)
_putchar(s[i]);

_putchar('\n');

}
