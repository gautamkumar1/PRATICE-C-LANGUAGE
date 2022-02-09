#include<stdio.h>
void lcmtwoNumbers(int *,int *);
int main()
{
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    lcmtwoNumbers(&a,&b);
}
void lcmtwoNumbers(int *a,int *b)
{
    int i,max;
    max = *a>*b?*a:*b;
    for ( i = max; i < *a**b; i++)
    {
        if (i%*a==0 && i%*b==0)
        {
            break;
        }
        
    }
    printf("LCM(%d ,%d) = %d",*a,*b,i);
}