#include <stdio.h>
int main (void)
{
void print_square(int size)
{
int y;
int x;
if (size <= 0)
putchar('\n');

else
{
for(y = 1; y <= size; y++)
{

for (x = 1; x <= size; x++)
putchar('#');
putchar('\n');

}

}

}
print_square(0);
return (0);
}

