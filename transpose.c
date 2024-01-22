/*write a program to take a matrix from the user and print the transpose of the same*/
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the row and columns");
    scanf("%d%d",&r,&c);
    int A[r][c],T[c][r];
    printf("Enter the matrix elements:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        scanf("%d",&A[i][j]);
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        T[i][j]=A[j][i];
    }
    printf("transpose of the matrix");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        printf("%d\t",T[i][j]);

    }
return 0; 
}