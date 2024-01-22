/*Write a program to dispaly fibonacci series using recusion and also using iteration*/
#include<stdio.h>
int fibonaccirecursive(int n)
{
    if(n<=1)
    return n;
    return fibonaccirecursive(n-1)+fibonaccirecursive(n-2);
}
void fibonacciiteration(int n)
{
    int a=0,b=1,next_term;
    printf("fibonacci series(iteration) ");
    for(int i=0;i<n;i++)
    {
        printf("%d",a);
        next_term=a+b;
        a=b;
        b=next_term;
    }
    printf("\n");
}
int main()
{
    int num;
    printf("Enter the number of terms");
    scanf("%d",&num);
    printf("fibonacci series(recursive)");
    for(int i=0;i<num;i++)
    {
        printf("%d",fibonaccirecursive(i));
        printf("\n");
    }
    fibonacciiteration(num);
    return 0;
}