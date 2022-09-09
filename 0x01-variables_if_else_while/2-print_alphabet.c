#include <stdio.h>
/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */
int main(void)
{
  /*Program that prints the alphabet in lowercase, followed by a new line*/
char alpha = 'a';
while (alpha <= 'z')
{
      /*use only the putchar function not printf, puts, etc… )*/
putchar(alpha);
alpha++;
}
  /*You can only use putchar twice in your code*/
putchar('\n');
return (0);
}
