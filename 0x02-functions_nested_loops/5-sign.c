#include "main.h"

/**
 * print_sign - Determines if the input number
 * is greater, equal to, or less than zero.
 * @n: The input number as an integer.
 * Return: 1 if greater than zero, 0 if zero,
 *         -1 if less than zero.
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar(43);  /* '+' character */
        return (1);
    }
    else if (n < 0)
    {
        _putchar(45);  /* '-' character */
        return (-1);
    }
    else
    {
        _putchar(48);  /* '0' character */
        return (0);
    }
    _putchar('\n');
}
