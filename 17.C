#include <stdio.h>
#include <math.h>
#include<conio.h>
void main()
{
int number, sum = 0, rem = 0, cube = 0, temp;
printf ("enter a number");
scanf("%d", &number);
temp = number;
while (number != 0)
{
rem = number % 10;
cube = pow(rem, 3);
sum = sum + cube;
number = number / 10;
}
if (sum == temp)
printf ("The given number is armstrong number");
else
printf ("The given number is not a armstrong number");
getch();
}
