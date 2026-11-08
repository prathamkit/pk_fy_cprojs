/**
* @brief Concatenate Two Strings
*
* Join two strings into a single string without using library functions.
*
* @author Pratham Kitawat
* @date 05-11-2026
*/

#include <stdio.h>

int main()
{
    char s1[25];    //initialization of first string
    char s2[25];    //initialization of first string
    int s1_len = 0;     //initialization of a variable to store the length of first string
    int s2_len = 0;     //initialization of a variable to store the length of second string

    printf("Enter first string: ");
    fgets(s1, 25, stdin);   //takes first string as input from the user
    printf("Enter second string: ");
    fgets(s2, 25, stdin);   //takes second string as input from the user

    for(int i = 0; s1[i] != '\0'; i++)  //calculates the length of the first string using string traversal
    {
        s1_len++;   //increases by 1 until it encounters null character
    }
    for(int i = 0; s2[i] != '\0'; i++)  //calculates the length of the second string using string traversal
    {
        s2_len++;   //increases by 1 until it encounters null character
    }

    for(int i = 0; s2[i] != '\0'; i++)
    {
        s1[s1_len - 1 + i] = s2[i];    //successive elements of s1 get assigned to the indices of s1 after the last element of s1
    }
    s1[s1_len + s2_len - 2] = '\0';    //adds a null character at the end of the concatenated string to avoid garbage characters
    printf("Concatenated String: %s", s1);    //displays the concatenated string

    return 0;
}
