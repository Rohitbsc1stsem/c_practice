#include<stdio.h>
#include<string.h>
int ispalindrome(char word[])
{
    int length=strlen(word);
    for(int i=0;i<length/2;i++)
    if(word[i]!=word[length-i-1])
    {
        return 0;
    }
    return 1;
}
int main()
{
    char word[100];
    printf("Enter the word");
    scanf("%s",word);
    if(ispalindrome(word))
    printf("The word is palindrome");
    else
    printf("The word is not palindrome");
    return 0;
}