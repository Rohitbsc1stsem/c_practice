/*write a program to take two matrices from the user and find the sum and product of both*/
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the row and column:");
    scanf("%d%d",&r,&c);
    int A[r][c],B[r][c];
    printf("Enter the elements of A:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        scanf("%d",&A[i][j]);
    }
    printf("Enter the element of B:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        scanf("%d",&B[i][j]);
    }
    int sum[r][c],product[r][c];
    printf("The sum of A and B matrices are:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        sum[i][j]=A[i][j]+B[i][j];
        printf("%d",sum[i][j]);}
    }printf("\n");
    printf("The product of A and B matrices are:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            product[i][j]=0;
            for(int k=0;k<c;k++)
            product[i][j]+=A[i][k]*B[k][j];
            printf("%d\t",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}