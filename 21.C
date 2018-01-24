#include<stdio.h>
#include<conio.h>
{
int n,k,d,sum=0,temp,i;
scanf("%d%d%d",&n,&k,&d);
for(i=0;i<n;i++)
{
temp=sum+k;
sum=temp;
k=k+d;
}
printf("%d",temp);
getch();
}
