#include<stdio.h>

struct student{
    int rollno;
    char name[10];
    float marks;
};

int main()
{
// int rollno[5]= {1,2,3,4,5};
// char name[5][20]= {"ram", "shyam", "mohan", "gita", "sita"};
// float marks[5]={56.7, 56, 78, 98, 98.9};

struct student students[5] ={
    {1, "ram", 56.7},
    {2, "shyam", 56},
    {3, "mohan", 78},
    {4, "gita", 98},
    {5, "sita", 98.9},
};

for (int i=0; i<5; i++)
{
printf("\nstudent name: %s, rollno: %d, marks: %.2f", students[i].name, students[i].rollno, students[i].marks);


  }
}