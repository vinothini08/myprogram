#include<stdio.h>
int main()
{
long long n;
int count=0;
printf("enter an integer:");
scanf("%lld",&n);
whilr(n!=0)
{
n=n/10;
++ count;
}
printf("no.of digits:%d",count);
}
