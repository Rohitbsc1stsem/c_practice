#include<stdio.h>
int main()
{
    float price, discount, net;
    printf("Input a price:");
    scanf("%f",&price);
    discount=0.15*price;
    net=price-discount;
    printf("the net amount:%f",net);
    return 0;
}