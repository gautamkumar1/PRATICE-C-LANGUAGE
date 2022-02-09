// Method 1: Using Arithmetic operators + and -
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Befrore Swap 1st Number: ");
    scanf("%d",&num1);
    printf("Before Swap 2nd Number: ");
    scanf("%d",&num2);
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    printf("After Swap 1st Number: %d\n",num1);
    printf("After Swap 2nd Number: %d\n",num2);
}
/*Instead of the above logic, you can also use
num1 = num2+num1;
num2 = num2-num1;
num1 = num2-num1;
You can even swap using a single line logic.
a = (a + b) - (b = a);*/

// Method 2: Using Arithmetic operators * and /
#include<stdio.h>
int main()
{
    int a,b;
    printf("Befrore Swap 1st Number: ");
    scanf("%d",&a);
    printf("Before Swap 2nd Number: ");
    scanf("%d",&b);
    a = a*b;
    b = a/b;
    a = a/b;
    printf("After Swap 1st Number: %d\n",a);
    printf("After Swap 2nd Number: %d\n",b);
}


// Method 3: Using Bit-wise Xo-Or Operators
#include<stdio.h>
void swapTwoNumbers(int *,int *);
int main()
{
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Before Swapping a = %d and b = %d",a,b);
    swapTwoNumbers(&a,&b);
    printf("\nAfter Swaping a = %d and b = %d",a,b);
}
// Logic to swap number using xo-or operators
void swapTwoNumbers(int *a,int *b)
{
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}