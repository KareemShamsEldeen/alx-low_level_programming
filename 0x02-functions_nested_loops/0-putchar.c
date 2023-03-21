/*
 * File: 0-putchar.c
 * Auth: Kareem Hossam
 */

#include "main.h"

/**
 * main - main function .
 *
 * Return: Always 0.
 */
int main(void)
{
char h[] = "_putchar";
int s = sizeof(h);
int i;
for (i = 0; i < s; i++)
{
_putchar(h[i]);
}

_putchar('\n');
return (0);
}
