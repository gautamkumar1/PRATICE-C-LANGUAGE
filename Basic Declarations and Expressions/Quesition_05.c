// Write a C program to compute the perimeter and area of a circle with a given radius.
#include<stdio.h>
int main()
{
    float radius,perimeter,circle;
    printf("Enter a radius: ");
    scanf("%f",&radius);
    perimeter = 2*3.14*radius;
    circle = 3.14*radius*radius;
    printf("\nArea of perimeter of circle = %f",perimeter);
    printf("\nArea of circle = %f",circle);

}