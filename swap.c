/* Write a programthat swaps two numbers using pointers*/
#include<stdio.h>
void swap(int *a,int *b)    
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=10,b=20;
    printf("Before swap%d\t%d",a,b);
    printf("\n");
    swap(&a,&b);
    printf("after swap%d\t%d",a,b);
    return 0;
}
