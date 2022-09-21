#include "main.h"
/**
 * rev_string : prints reversed string followed by a new line
 * @s : pointer to the string to print
 * return : void
 */

void rev_string(char *s)
{
int full, x, y;
char tmp, *str;

while (full >= 0)
{
if (s[full] == '\0')
break;
full++;
}

str = s;

for (x = 0; x < (full - 1); x++)
{
for (y = i + 1; y > 0; y--)
{
tmp = *(str + y);
*(str + y) = *(str + (y - 1));
*(str + (y - 1)) = tmp;
}

}

}

