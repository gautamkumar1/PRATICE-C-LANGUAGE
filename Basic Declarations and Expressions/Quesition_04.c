// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches
#include<stdio.h>
int main()
{
    int length,wiidth,perimeter,rectangle;
    printf("Enter a length: ");
    scanf("%d",&length);
    printf("\nEnter a width: ");
    scanf("%d",&wiidth);
    perimeter = 2*(length+wiidth);
    rectangle = wiidth*length;
    printf("\nPerimeter of rectangle = %d",perimeter);
    printf("\nArea of rectangle = %d",rectangle);
}
