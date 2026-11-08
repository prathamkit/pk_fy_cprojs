/**
* @brief Demonstration of 1-D Array Initialization, Traversal and Sum
*
* This program contains two arrays on which initialization, traversal
* and sum calculation of elements are performed.
*
* @author Pratham Kitawat
* @date 23-10-2026
*/

#include <stdio.h>

int main()
{
    int sum = 0;    //to calculate sum of elements in array a2
    int a1[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};    //single line initialization of array a1

    int a2[5] = {5, 10};;    //partial initialization of array a2
    a2[2] = 15;    //individual element assignment of array a2
    a2[3] = 20;
    a2[4] = 25;

    printf("First Array: \n");    //Display of elements of a1 using individual element access through indexing
    printf("%d ", a1[0]);
    printf("%d ", a1[1]);
    printf("%d ", a1[2]);
    printf("%d ", a1[3]);
    printf("%d ", a1[4]);
    printf("%d ", a1[5]);
    printf("%d ", a1[6]);
    printf("%d ", a1[7]);
    printf("%d ", a1[8]);
    printf("%d \n\n", a1[9]);

    printf("Second Array: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", a2[i]);    //a2 array traversal
        sum = sum + a2[i];    //calculation of sum of elements of array a2.
    }

    printf("\n");
    printf("Sum = %d", sum);    //display of sum of elements of array a2

    return 0;
}
