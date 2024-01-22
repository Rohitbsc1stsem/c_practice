/*Write a program to print the array in reverse order*/
#include<stdio.h>
void reversearray(int a[],int size)
{
    printf("array in reverse order:");
    for(int i=size-1;i>=0;i--){
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    printf(" original array:");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    reversearray(a,size);
    return 0;
}