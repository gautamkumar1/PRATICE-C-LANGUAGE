#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a any alphabet to check or not: ");
    scanf("%c",&ch);
    if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    {
        printf("%c is an alphabet",ch);
    }
    else
    {
        printf("%c is not alphabet",ch);
    }
    
}