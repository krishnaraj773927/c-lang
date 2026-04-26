#include<stdio.h>

int main()
{
   // int marks1, marks2,marks3,marks4,marks5;
    int marks[5];

    printf("enter the marks of students 1");
    scanf("%d", &marks[0]);

    printf("enter the marks of students 2");
    scanf("%d", &marks[1]);

    printf("enter the marks of students 3");
    scanf("%d", &marks[2]);

    printf("enter the marks of students 4");
    scanf("%d", &marks[3]);

    printf("enter the marks of students 5");
    scanf("%d", &marks[4]);

    printf("\n marks of student 1 are = %d", marks[0]);
    printf("\n marks of student 2 are = %d", marks[1]);
    printf("\n marks of student 3 are = %d", marks[2]);
    printf("\n marks of student 4 are = %d", marks[3]);
    printf("\n marks of student 5 are = %d", marks[4]);
    
}
