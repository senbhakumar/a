#include<stdio.h>
int main()
{
int n;
int count=0;
printf("enter an integer");
scanf("%d",&n);
if(n!=0)
{
n=n%10;
count++;
}
printf("number of digits %d",count);
return0;
}
