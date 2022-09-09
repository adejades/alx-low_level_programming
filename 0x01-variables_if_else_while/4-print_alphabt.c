#include <stdio.h>
/**
 *main - print lowercase alphbeta a-z but remove 'q' and 'e'
 *Return: Always 0 (Success)
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
if ((alpha != 'q') && (alpha != 'e'))
{
  /*use the putchar function !(printf, puts, etc)*/
putchar(alpha);
}
alpha++;
}
  /*only use putchar twice in your code*/
putchar('\n');
return (0);
}
