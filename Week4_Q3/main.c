/**
* @brief  Demonstration of 2-D Array Initialization, Accessing Elements and Traversal
*
* This program initializes a 3*3 and 2*3 integer matrices and performs traversal and sum calculation
* on them. It also accesses the elements of first matrix using row and column index given by the user
*
* @author Pratham Kitawat
* @date 23-10-2026
*/

#include <stdio.h>

int main()
{
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};    //initialization and assignment of elements of matrix 'a' using compile-time initialization

    int b[2][3];    //initialization of second matrix
    b[0][0] = 10;    //individual element assignments of matrix 'b'
    b[0][1] = 20;
    b[0][2] = 30;
    b[1][0] = 40;
    b[1][1] = 50;
    b[1][2] = 60;

    printf("First Matrix (3x3): \n");    //display of elements of matrix 'a'
    printf("%d %d %d\n", a[0][0], a[0][1], a[0][2]);    //individual element access through row and column indices
    printf("%d %d %d\n", a[1][0], a[1][1], a[1][2]);
    printf("%d %d %d\n", a[2][0], a[2][1], a[2][2]);
    printf("\n");

    printf("Second Matrix (2x3): \n");    //display of elements of matrix 'b'
    for(int i = 0; i < 2; i++)    //controls the row indices of matrix
    {
        for(int j = 0; j < 3; j++)    //controls the column indices of matrix
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int row = 0, column = 0;
    printf("Enter row index (0-2): ");
    scanf("%d", &row);    //takes a row index as input from the user
    printf("Enter column index (0-2): ");
    scanf("%d", &column);    //takes a column index as input from the user
    printf("Element at a[%d][%d] = %d\n", row, column, a[row][column]);    //display of corresponding element from matrix 'a'
    printf("\n");

    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum1 = sum1 + a[i][j];    //calculation of sum of elements of matrix 'a' using nested loops
        }
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum2 = sum2 + b[i][j];    //calculation of sum of elements of matrix 'b' using nested loops
        }
    }
    printf("Sum of first matrix = %d\n", sum1);    //display of sum of elements of matrix 'a'
    printf("Sum of second matrix = %d\n", sum2);    //display of sum of elements of matrix 'b'

    return 0;
}
