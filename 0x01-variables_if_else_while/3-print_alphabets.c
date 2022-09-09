#include <stdio.h>
/**
 *main - print lowercase and uppercase a-z and A-Z using putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
char lowerCase = 'a';
char upperCase = 'A';
while (lowerCase <= 'z') /*print lowercases a-z*/
{
putchar(lowerCase);
lowerCase++;
}
while (upperCase <= 'Z') /*print uppercase A-Z*/
{
putchar(upperCase);
upperCase++;
}
putchar('\n');
return (0);
}
