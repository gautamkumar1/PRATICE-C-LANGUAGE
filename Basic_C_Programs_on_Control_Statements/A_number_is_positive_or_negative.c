#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num<0)
    {
        printf("%d is Negative Number",num);
    }
    else if (num>0)
    {
        printf("%d is Positive Number",num);
    }
    else
    {
        printf("%d is zero",num);
    }
    
}