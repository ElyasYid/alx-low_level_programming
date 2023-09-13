#include "main.h"

/**
*print_times_table - prints the times table of input starting from 0
*@n: The value of the times table to be printed
*/

void print_times_table(int n)

{
int nu, mu, pr;
if (n >= 0 && n <= 15)
{
for (nu = 0; nu <= n; nu++)
{
_putchar('0');
for (mu = 1; mu <= n; mu++)
{
_putchar(',');
_putchar(' ');
pr = nu * mu;
if (pr <= 99)
_putchar (' ');
if (pr <= 9)
_putchar(' ');
if (pr >= 100)
{
_putchar((pr / 100) + '0');
_putchar(((pr / 10) % 10) + '0');
}
else if (pr <= 99 && pr >= 10)
{
_putchar((pr / 10) + '0');
}
_putchar((pr % 10) + '0');
}
_putchar('\n');
}
}

}
