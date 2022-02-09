/*
Write a C program to calculate the distance between the two points. Go to the editor
Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,distance;
    printf("Enter x1 value: ");
    scanf("%f",&x1);
    printf("\nEnter y1 value: ");
    scanf("%f",&y1);
    printf("\nEnter x2 value: ");
    scanf("%f",&x2);
    printf("\nEnter y2 value: ");
    scanf("%f",&y2);
    distance = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("\nDistance between the said points: %.4f",distance);

}
