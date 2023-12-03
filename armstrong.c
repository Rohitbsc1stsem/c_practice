#include<stdio.h>
#include<math.h>
int isarmstrong(int num )
{
    int originalnum, remainder,result=0,n=0;
    originalnum=num;
    while(originalnum!=0)
    {
        originalnum/=10;
        ++n;
    }
    originalnum=num;
    while(originalnum!=0)
    {
        remainder=originalnum%10;
        result+=pow(remainder,n);
        originalnum/=10;
    }
    if(result==num)
    return 1;
    else 
    return 0;
}
int main()
{
    int number;
    printf("Input an integer:");
    scanf("%d",&number);
    if(isarmstrong(number))
    printf(" The number is an armstrong");
    else 
    printf("The number is not an armstrong");
    return 0;
}