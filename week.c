#include<stdio.h>
int main()
{
    int D,M,Y;
    printf("Enter date(1-31):");
    scanf("%u",&D);
    printf("Enter the month(1-12):");
    scanf("%u",&M);
    printf("Enter the year:");
    scanf("%u",&Y);
    int c=Y/100;
    int k=Y%100;
    int z=(D+(26*(M+1)/10)+k+(k/4)+(c/4)+5*c)%7;
    switch (z)
    {
    case 0: printf("The day is Saturday.");
        break;
    case 1: printf("The day is Sunday.");
        break;
    case 2: printf("The day is Monday.");
        break;
    case 3: printf("The day is Tuesday.");
        break;
    case 4: printf("The day is Wednesday.");
        break;
    case 5: printf("The day is Thursday.");
        break;
    case 6: printf("The day is Friday.");
        break;    
    }
    return 0;
}