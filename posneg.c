#include<stdio.h>
int main()
{
    int a;
    printf("Input a number:");
    scanf("%d",&a);
    printf("%s",a>0?"positive":"negative");
    return 0;
}