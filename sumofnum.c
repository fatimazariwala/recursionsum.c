#include<stdio.h>

int sum (int num);

int main()
{
    int a=1234;
    printf("Input number: %d ",a);

    printf("\nSum of digits : %d",sum(a));
}

int sum (int num)
{
    if (num==0)
        return 0;
    else
        return ((num%10)+ sum(num/10));



}


