#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a any character: ");
    scanf("%c",&ch);
    if ((ch>=65 & ch<=90)) // For UpperCase Check
    {
        printf("%c is an UpperCase",ch);
    }
    else if (ch>=97 && ch<=122) // For LowerCase Check
    {
        printf("%c is an LowerCase",ch);
    }
    else
    {
        printf("%c is an Special Character",ch); // Else Special Character
    }
    
}