#include <stdio.h>

void printFib(int n)
{
int fb1 = 0, fb2 = 1, i;

if ( n < 1)
return ;


printf("%d" , fb1);
for (i = 1; i < n; i++)

{
printf("%d" , fb2);

if ( 1 < n || n < 98)
printf (",");

int next = fb1 + fb2;
fb1 = fb2;
fb2 = next;
}
printf("\n");
}


int main(void)
{
printFib(98);
return (0);
}
