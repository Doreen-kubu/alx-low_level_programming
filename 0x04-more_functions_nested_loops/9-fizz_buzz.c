#include <stdio.h>

/**
 * main - prints fizz, buzz and fizzbuzz.
 *
 * Return: void.
 */
int main (void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (( x % 3) && (x % 5) != 0)
printf("%d ", x);

 if ((x % 5 == 0) && (x % 3 == 0))
printf("FizzBuzz ");

else if (x % 3 == 0)
printf("Fizz ");

else if (x % 5 == 0)
printf("Buzz ");

}
putchar('\n');
return (0);
}
