#include<stdio.h>

struct student{
    int rollno;
    char name[10];
    float marks;
};
int main()
{
    struct student student1;

    printf("plz enter student deatail\n");
    printf("enter roll no.");
    scanf("%d", &student1.rollno);
    printf("enter the name: ");
    scanf(" %9s", student1.name);
    printf(" now enter your marks:");
    scanf("%f", &student1.marks);

    printf("here are your detail\n");
    printf(" name:%s, rollno: %d, marks %.2f", student1.name, student1.rollno,  student1.marks);

    return 0;
}