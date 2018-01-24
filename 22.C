#include <stdio.h>
#include<conio.h>
void main()
{
int a[50],n,i,max;
printf("enter no of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max = a[0];
for (i = 1; i < n; i++)
{
if (a[i] > max)
{
max  = a[i];
}
}
printf("%d",max);
getch();
}
