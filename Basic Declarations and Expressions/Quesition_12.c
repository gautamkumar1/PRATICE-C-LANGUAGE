/*
Write a C program that accepts three integers and find the maximum of three. Go to the editor
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("Max Number = %d",a);
    }
    else if (b>a && b>c)
    {
        printf("Max Number = %d",b);
    }
    else
    {
        printf("Max Number = %d",c);
    }
    
}