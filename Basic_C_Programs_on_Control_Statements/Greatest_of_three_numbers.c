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
        printf("Greater = %d\n",a);
    }
    else if (b>a && b>c)
    {
        printf("Greater = %d\n",b);
    }
    else
    {
        printf("Greater = %d\n",c);
    }
    
}