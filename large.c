#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("enter the three numbers:");
scanf("%d %d %d"&num1,&num2,&num3);
if(num1>=num2 && num1>=num3)
printf("%d is the greatest:,num1);
else if(num2>=num3 && num2>=num1)
printf("%d is the greatest",num2);
else
printf("%d is the greatest",num3);
return 0;
}
