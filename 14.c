#include <stdio.h>
#include<conio.h>
void main()
{
int num,m ,n;
clrscr();
printf("Enter the first number range m");
scanf("%d",&m);
printf("Enter the second number range n:");
scanf("%d",&n");
printf("Print Odd Numbers in a given range m to n:\n");
for (num = m; num <= n; num++)
{
if (num % 2 == 1)
printf ("%d ", num);
}
getch();
}
