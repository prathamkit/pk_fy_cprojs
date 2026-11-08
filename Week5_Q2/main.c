/**
* @brief Username Validator (Strings)
*
* A website requires usernames to follow certain rules.
*
* @author Pratham Kitawat
* @date 5-11-2026
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char username[100]; //initialization of a string of size 100 to store the username
    int isValid = 1;    //initialization of a variable to check the validation of the username

    printf("Enter a username: ");
    scanf("%99s", username);    //takes a username as input from the user

    int len = strlen(username);  //stores the length of the username

    if (len < 6 || len > 15)  //checks if the length of the username is between 6 and 15
    {
        isValid = 0;
    }

    for (int i = 0; i < len; i++)    //checks for alphabets/digits and convert uppercase to lowercase in the username
    {
        if (!isalnum((unsigned char)username[i]))   //checks if a character is not alphanumeric
        {
            isValid = 0;
            break; //no need to check further if an invalid character is found
        }

        username[i] = tolower((unsigned char)username[i]);  //converts uppercase letters to lowercase
    }

    printf("Processed username: %s\n", username);   //display of processed username
    if (isValid == 1)   //if isValid = 1, the username is valid
    {
        printf("The username is valid.\n");
    }
    else    //otherwise, the username is valid
    {
        printf("The username is invalid.\n");
    }

    return 0;
}
