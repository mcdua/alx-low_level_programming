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
int d;
for (a = 0; a <= 7; a++)
{
for (c = a + 1; c <= 8; c++)
{
for (d = c + 1; d <= 9; d++)
{
putchar(a + '0');
putchar(c + '0');
putchar(d + '0');
if (a < 7 || c < 8 || d < 9)
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
