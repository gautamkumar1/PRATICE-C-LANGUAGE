/*
12. Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month. Go to the editor
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
*/
#include<stdio.h>
int main()
{
    char id[10];
    int hrs;
    double salaryPerHrs,total_salary;
    printf("Enter a Employes ID (Max. 10 chars): ");
    scanf("%s",&id);
    printf("Enter the working hours: ");
    scanf("%d",&hrs);
    printf("Enter the salary per hours: ");
    scanf("%lf",&salaryPerHrs);
    total_salary = salaryPerHrs*hrs;
    printf("Employees ID = %s\n",id);
    printf("Salary = U$%2.lf\n",total_salary);
}