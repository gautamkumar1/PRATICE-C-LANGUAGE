/*
Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items. Go to the editor
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444
*/
#include<stdio.h>
int main()
{
    double weight1,weight2,item1,item2,average;
    printf("Enter no of weight1: ");
    scanf("%lf",&weight1);
    printf("Enter no of item1: ");
    scanf("%lf",&item1);
    printf("Enter no of weight2: ");
    scanf("%lf",&weight2);
    printf("Enter no of item2: ");
    scanf("%lf",item2);
    average = ((weight1*item1)+(weight2*item2)/(item1+item2));
    printf("Average Value of item = %f\n",average);


}