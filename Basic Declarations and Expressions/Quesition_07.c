/*
Write a C program to convert specified days into years, weeks and days. Go to the editor
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3
*/
#include<stdio.h>
int main()
{
    int days,weeks,year;
    printf("Enter no of days: ");
    scanf("%d",&days);
    year = (days/365);
    weeks = (days % 365)/7;
    days = days - ((year*365)+(weeks*7));
    printf("Year = %d\n",year);
    printf("Weeks = %d\n",weeks);
    printf("Days = %d\n",days);
}