#include<stdio.h>
int main()
{
int n;
printf("Enter a number\n");
scanf("%d",&n);
if(n<=0)
{
if(n==0)
{
printf("number is 0");
}
else
{
printf("number is negative");
}
}
else
{
printf("number is positive");
}
return 0;
}
