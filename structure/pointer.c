#include<stdio.h>

struct student{
    int rollno;
    char name[10];
    float marks;
};


int main()
{
    int a =5;
    int *ptr = &a;

    struct student student = {1,"ram",98};
    struct student *stu_ptr = &student;

    printf("\nrollno: %d, name: %s, marks: %.2f", student.rollno, student.name,  student.marks );

    printf("\nrollno: %d, name: %s, marks: %.2f", (*stu_ptr).rollno, (*stu_ptr).name,  (*stu_ptr).marks );

    printf("\nrollno: %d, name: %s, marks: %.2f", stu_ptr->rollno, stu_ptr->name,  stu_ptr->marks );
}