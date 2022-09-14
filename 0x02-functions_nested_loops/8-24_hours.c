#include "main.h"
/**
 * jack_bauer - prints the time in 24hr
 * return - always 0
 *
 */
void jack_bauer(void)
{
int m, h;
/*
 * m =minutes
 * h = hours
 *
 */
for (h = 0; h <= 24; h++)

{
for (m = 0; m < 60; m++)

{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');

_putchar(':');

_putchar((m / 10) + '0');
_putchar((m % 10) + '0');

_putchar('\n');
}

}
}
