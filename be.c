#include<stdio.h>
int main()
{
int b,e;
long long result=1;
printf("enter the base number:");
scanf("%d",&b);
printf("enter the exponent number:");
scanf("%d",&e);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("answer=%lld",result);
return 0;
}
