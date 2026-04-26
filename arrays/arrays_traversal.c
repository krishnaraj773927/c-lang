#include<stdio.h>



int main()
{
    int marks[5];
    int no_of_students=5;

    for( int i=0; i < no_of_students; i++){
        printf(" enter thre marks of srudent %d", i + 1);
        scanf("%d", &marks[i]);
    }

    for( int i=0; i< no_of_students; i++){
        printf("\nmarks of student %d are=%d ",(i+1) ,marks[i]);
    }


    return 0;
}
