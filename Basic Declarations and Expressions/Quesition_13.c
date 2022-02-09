/*
Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point). Go to the editor
Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000
*/
#include<stdio.h>
int main()
{
    int distance;
    float liters,average;
    printf("Enter the total distance in K/M: ");
    scanf("%d",&distance);
    printf("\nEnter total fuel spent in liters: ");
    scanf("%f",&liters);
    average = distance/liters;
    printf("\nAverage Consumtion (km/lt) %.2f",average);
}