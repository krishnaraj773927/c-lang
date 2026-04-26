#include<stdio.h>

struct student{
    int rollno;
    char name[10];
    float marks;
};
//call by value
void printstudent(struct student stu);

//call by reference
void print_student_from_pointer(struct student *stu);


int main()
{
    int a =5;
    int *ptr = &a;

    struct student student = {1,"ram",98};
    struct student *stu_ptr = &student;

    printstudent(student);
    printf("\nrollno: %d, name: %s, marks: %.2f", student.rollno,  student.name,   student.marks );

    print_student_from_pointer(stu_ptr);
    printf("\nrollno: %d, name: %s, marks: %.2f", student.rollno, student.name,  student.marks );

}

void printstudent(struct student stu) 
{
    stu.rollno = 5;
    printf("\nrollno: %d, name: %s, marks: %.2f", stu.rollno, stu.name,  stu.marks );
}

void print_student_from_pointer(struct student *ptr) 
{
    ptr->rollno = 6;
    printf("\nrollno: %d, name: %s, marks: %.2f", ptr->rollno, ptr->name,  ptr->marks );
}