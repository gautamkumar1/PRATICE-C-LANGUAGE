#include<stdio.h>
int main()
{
    int rows,colm,i,j,sum = 0;
    printf("Enter the size of rows in array: ");
    scanf("%d",&rows);
    printf("\nEnter the size of colmun in array: ");
    scanf("%d",&colm);
    int arr[rows][colm];
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < colm; j++)
        {
            printf("\nEnter a number in arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("\nMatrix Elements Are");
    for ( i = 0; i < rows; i++)
    {
        printf("\n");
        for ( j = 0; j < colm; j++)
        {
            printf("%d\t",arr[i][j]);
            sum+=arr[i][j];
        }
        
    }
    printf("\nSum of all matrix elements = %d",sum);
}