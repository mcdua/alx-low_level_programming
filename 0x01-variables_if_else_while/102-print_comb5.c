#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int a;
int c;
for (a = 0; a <= 99; a++)
{
for (c = a; c <= 99; c++)
{
if (a != c)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');
putchar(' ');
putchar((c / 10) + '0');
putchar((c % 10) + '0');
if (a != 98 || c != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
