#include<stdio.h>
int main()
{
int dividend,divisor,quotient,remainder;
printf("enter dividend and divisor:");
scanf("%d %d",&dividend,&divisor);
quotient=dividend/divisor;
remainder=dividend%divisor;
printf("%d",quotient);
printf("%d",remainder);
return 0;
}
