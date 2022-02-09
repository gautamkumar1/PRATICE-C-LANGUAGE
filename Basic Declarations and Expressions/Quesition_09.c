// Write a C program that accepts two integers from the user and calculate the product of the two integers.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter a 1st number: ");
    scanf("%d",&num1);
    printf("Enter a 2nd number: ");
    scanf("%d",&num2);
    printf("Product of these two numbers = %d\n",num1*num2);
}