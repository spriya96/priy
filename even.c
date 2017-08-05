#include<stdio.h>
int main(void)
{
int n,e;
printf("enter the number");
scanf("%d",&n);
e=n%2;
if(e==0)
{
printf("the given number is even");
}
else
{
printf("the given number is odd");
}
return 0;
}
