#include "main.h"
/**
*puts_half : prints half of a string
*@str : pointer to the string to print
*return : void
*/

void puts_half(char *str)

{

int full;

for (full = 0; str[full] != '\0'; full++)
;

int i;

for (i = (full + 1) / 2; str[i] != '\0'; i++)
_putchar(str[i]);

_putchar('\n');

}
