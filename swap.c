#include<stdio.h>
int main()
{
double num1,num2,temp;
printf("enter two numbers:");
scanf("%lf %lf",&num1,&num2);
temp=num1;
num1=num2;
num2=temp;
printf("After swapping %.2lf %.2lf",num1,num2);
return 0;
}
