#include<stdio.h>

int main()
{
int rollno[5]= {1,2,3,4,5};
char names[5][20]= {"ram", "shyam", "mohan", "gita", "sita"};
float marks[5]={56.7, 56, 78, 98, 98.9};

for (int i=0; i<4; i++)
{
printf("\nstudent name: %s, rollno: %d, marks: %.2f", names[i], rollno[i], marks[i]);


  }
}