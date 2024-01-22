/*write a program to open a file for reading and dispalys the contents of the file character by character and line by line on the screen*/
#include<stdio.h>
int main()
{
    FILE *file;
    char filename[100];
    char ch;
    printf("Enter the file name:");
    scanf("%s",filename);
    file=fopen(filename,"r");
    if(file==NULL)
    {
        printf("Error opening the file");
        return 1;
    }
    printf("display the content character by character: ");
    while((ch=fgetc(file))!=EOF)
    {
        putchar(ch);
    }
    fclose(file);
    file=fopen(filename,"r");
    if(file==NULL)
    {
        printf("Error opening the file");
        return 1;
    }
    printf("\n content line by line: ");
    while(fgets(filename,sizeof(filename),file)!=NULL)
    {
        printf("%s",filename);
    }
    fclose(file);
    return 0;
}