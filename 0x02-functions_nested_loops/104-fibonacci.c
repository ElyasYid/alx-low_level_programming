#include <stdio.h>
/**
*main - prints out first 98 fibonacci suit numbers
*Return: return 0
*/

int main(void)
{
int fib;
unsigned long n1 = 0, n2 = 1, n3;
unsigned long n1_q1, n1_q2, n2_q1, n2_q2;
unsigned long q1, q2;

for (fib = 0; fib < 92; fib++)
{
n3 = n1 + n2;
printf("%lu, ", n3);
n1 = n2;
n2 = n3;
}
n1_q1 = n1 / 10000000000;
n2_q1 = n2 / 10000000000;
n1_q2 = n1 % 10000000000;
n2_q2 = n2 % 10000000000;
for (fib = 93; fib < 99; fib++)
{
q1 = n1_q1 + n2_q1;
q2 = n1_q2 + n2_q2;
if ((n1_q2 + n2_q2) > 9999999999)
{
q1 += 1;
q2 %= 10000000000;
}
printf("%lu%lu", q1, q2);
if (fib != 98)
printf(", ");

n1_q1 = n2_q1;
n1_q2 = n2_q2;
n2_q1 = q1;
n2_q2 = q2;
}
printf("\n");
return (0);
}
