/*LOGIC TO FIND GCD
let a=4,b=6
4%1=0,6%1=0 -> 1
4%2=0,6%2=0 -> 2
4%3=1,6%3=0 -> 2
4%4=0,6%4=2 -> 2
Its Means GCD = 2 
*/
#include<stdio.h>
void gcd(int *,int *);
int main()
{
    int a ,b;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    gcd(&a,&b);
}
void gcd(int *a,int *b)
{
    int i,min,GCD;
    min = *a<*b?*a:*b;
    for ( i = 1; i <= min; i++)
    {
        if (*a%i==0 && *b%i==0)
        {
            GCD = i;
        }
        
    }
    printf("GCD(%d,%d) = %d\n",*a,*b,GCD);
}