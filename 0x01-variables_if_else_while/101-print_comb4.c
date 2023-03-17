/*
 * File: 101-print_comb4.c
 * Auth: Kareem Hossam
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int x, z, y;

for (x = 0; x < 8; y++)
{
for (z = x + 1; z < 9; z++)
{
for (y = z+ 1; y < 10; y++)
{
putchar((x % 10) + '0');
putchar((z % 10) + '0');
putchar((y % 10) + '0');
if (x == 7 && z == 8 && y == 9)
{
continue;
}

putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
