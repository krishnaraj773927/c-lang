#include<stdio.h>

struct student {
    int rollno;
    char name[10];
    float marks;
};

int main()
{
    //direct initalization
    struct student s1 = {1, "ram", 99.98};

    //designated intitalization
    struct student s2 = {.name = "krishna", .marks = 70.27, .rollno = 23};

    //zero intilazition
    struct student s3 ={0};

    //copy intitalization
    struct student s4 = s1; s4.rollno = 9;
    
    printf("\nrollno: %d, name: %s, marks: %.2f", s1.rollno, s1.name, s1.marks);
    printf("\nrollno: %d, name: %s, marks: %.2f", s2.rollno, s2.name, s2.marks);
    printf("\nrollno: %d, name: %s, marks: %.2f", s3.rollno, s3.name, s3.marks);
    printf("\nrollno: %d, name: %s, marks: %.2f", s4.rollno, s4.name, s4.marks);

  return 0;

}
