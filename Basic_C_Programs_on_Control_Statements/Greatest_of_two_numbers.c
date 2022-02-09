#include<stdio.h>
void greatestTwoNumbers(int * , int *);
int main()
{
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    greatestTwoNumbers(&a,&b);
}
void greatestTwoNumbers(int *a , int *b)
{
    if (*a>*b)
    {
        printf("%d is Greater Than %d",*a,*b);
    }
    else
    {
        printf("%d is greater than %d",*b,*a);
    }
    
}