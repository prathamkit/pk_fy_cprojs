/**
* @brief  Student Marks Table and Row/Column Analysis
*
* This program takes number of students, number of subjects and marks of the students in each subject
* as input from the user. It then evaluates a marks table, average marks, highest and lowest marks, and
* accesses the marks at a particular student index and subject index.
*
* @author Pratham Kitawat
* @date 23-10-2026
*/

#include <stdio.h>

int main()
{
    int marks[10][5];    //initialization of 2-D array to store marks
    int student = 0, subject = 0;
    printf("Enter number of students (max 10): ");
    scanf("%d", &student);    //takes number of students as input from the user
    printf("Enter number of subjects (max 5): ");
    scanf("%d", &subject);    //takes number of subjects as input from the user
    printf("\n");

    for(int i = 0; i < student; i++)    //controls the student index
    {
        printf("Enter marks for Student %d: \n", (i+1));
        for(int j = 0; j < subject; j++)    //controls the subject index
        {
            printf("Subject %d: ", (j+1));
            scanf("%d", &marks[i][j]);    //takes marks of the students in each subject as input from the user using nested loops
        }
        printf("\n");
    }

    printf("Student Marks Table: \n\n");    //prints a student marks table

    printf("Student \t");    //prints the header of the table using for loop
    for(int i = 0; i < subject; i++)
    {
        printf("sub%d\t", (i+1));
    }
    printf("Total\n");

    for(int i = 0; i < student; i++)    //prints the body of the table using nested loops
    {
        int total = 0;
        printf("Student %d\t", (i+1));
        for(int j = 0; j < subject; j++)
        {
            printf("%d\t", marks[i][j]);
            total = total + marks[i][j];    //calculates the total marks of each student
        }
        printf("%d\n", total);    //displays the total marks of each student
    }
    printf("\n");

    printf("Average marks in each subject: \n");
    for(int i = 0; i < subject; i++)
    {
        float total = 0;
        printf("Subject %d: ", (i+1));
        for(int j = 0; j < student; j++)
        {
            total = total + marks[j][i];    //calculates the total marks in each subject
        }
        printf("%.2f\n", (total/student));    //calculates and displays the average marks in each subject
    }
    printf("\n");

    int max = marks[0][0], min = marks[0][0];    //assigning the first element of the marks matrix to max and min
    for(int i = 0; i < student; i++)
    {
        for(int j = 0; j < subject; j++)
        {
            if(marks[i][j] < min)    //occurs when the marks corresponding to indices i and j are lower than min
            {
                min = marks[i][j];    //those marks become the new minimum marks
            }if(marks[i][j] > max)    //occurs when the marks corresponding to indices i and j are higher than max
            {
                max = marks[i][j];    //those marks become the new maximum marks
            }
        }
    }
    printf("Highest mark = %d\n", max);    //display of highest marks
    printf("Lowest mark = %d\n", min);    //display of lowest marks
    printf("\n");

    int stu_ind = 0, sub_ind = 0;    //initialization of student and subject indices
    printf("Enter student index (0 to %d): ", student-1);
    scanf("%d", &stu_ind);    //takes a student index as input from the user
    printf("Enter subject index (0 to %d): ", subject-1);
    scanf("%d", &sub_ind);    //takes a subject index as input from the user
    printf("Mark at marks[%d][%d] = %d\n", stu_ind, sub_ind, marks[stu_ind][sub_ind]);    //prints the marks at those indices entered by the user

    return 0;
}
