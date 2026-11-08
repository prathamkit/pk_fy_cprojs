/**
* @brief  User Input, Linear Search, Minimum and Maximum
*
* This program asks the user for array size and elements and then finds maximum
* and minimum elements and performs linear search for an element given by the user.
*
* @author Pratham Kitawat
* @date 23-10-2026
*/

#include <stdio.h>

int main()
{
    int n = 0;    //initialization of n(size of the array)
    printf("Enter size of array: ");
    scanf("%d", &n);    //taking size of the array as input from the user
    int a[n];    //initialization of array 'a' of size n

    printf("Enter %d elements: \n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);    //taking elements of the array as input from the user using for loop
    }
    printf("\n");

    printf("Array elements: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);    //display of elements of the array using for loop
    }
    printf("\n");

    int min = a[0], max = a[0];    //assigning the first element of array to max and min
    for(int i = 0; i < n; i++)
    {
        if(a[i] < min)    //if it finds an element lesser than min, that element becomes minimum
        {
            min = a[i];
        }
        if(a[i] > max)    //if it finds an element greater than max, that element becomes maximum
        {
            max = a[i];
        }
    }
    printf("Mimimum element = %d\n", min);    //display of minimum element of the array
    printf("Maximum element = %d\n", max);    //display of maximum element of the array
    printf("\n");

    int key = 0, found = 0;    //initialization of key and found
    printf("Enter element to search: ");
    scanf("%d", &key);    //takes the element to be searched as input from the user

    for(int i = 0; i < n; i++)    //linear search
    {
        if(key == a[i])    //if the element is found, it prints a message and exits the loop using break keyword
        {
            printf("Element %d found at index %d\n", key, i);
            found++;    //found increases by one
            break;
        }
    }
    if(found == 0)    //occurs when element to be searched is not found
    {
        printf("Element not found.\n");
    }

    return 0;
}
