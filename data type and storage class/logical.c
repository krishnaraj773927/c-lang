#include<stdio.h>

int main()
{
     int age;
    char is_indian;

    printf("welcome to ARTO.\n enter your age");
    scanf("%d",&age);

    printf("are you an indian citizen (Y/N):");
    scanf(" %c",&is_indian);

    if(age>=18 && age<70)
    {
        printf("you are eligible are licence.\n");
    }
    else
    {
        printf(" you ar not eligible for licence.\n");
    }
    return 0;


}