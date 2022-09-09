#include <stdio.h>
/**
 *main - print all single digit numbers of base 10 starting from 0 (0123456789)
 *Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;
while (num < 10)
{
printf("%i", num);
num++;
}
putchar('\n');
return (0);
}
