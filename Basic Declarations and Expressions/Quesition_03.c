/*
Write a C program to print the following characters in a reverse way.
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX
*/
#include<stdio.h>
int main()
{
    char a,b,c;
    printf("Enter Test Characters: ");
    scanf("%c%c%c",&a,&b,&c);
    printf("The reverse of %c%c%c is %c%c%c\n",a,b,c,c,b,a);
}