#include <stdio.h>
int main()
{
    int num1,num2;
    float sum,sub,mul,div;

    printf("Enter First Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);
    printf("sum:%.2f\n",sum=num1+num2);
    printf("subtraction:%.2f\n",sub=num1-num2);
    printf("multiplication:%.2f\n",mul=num1*num2);
    printf("divition:%.2f\n",div=num1/num2);
}
