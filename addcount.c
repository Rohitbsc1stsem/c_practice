#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Input number:");
    scanf("%u",&n);
    for(sum;n!=0;n/=10)
    sum=sum+n%10;
    printf("The sum of digits is %u",sum);
    return 0;
}