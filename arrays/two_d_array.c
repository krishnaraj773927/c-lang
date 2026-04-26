#include<stdio.h>

int main()
{
    int marks[5][6];

    for(int row=0; row<5; row++){
        for(int col=0; col<6; col++){

            printf("enter the marks of student:%d, subject: %d:", row+1,col+1);
            scanf("%d", &marks[row][col]);
        }
    }
















//     int student1[6];
//     int student2[6];
//     int student3[6];
//     int student4[6];
//     int student5[6];
// 
//     int subject1[6];
//     int subject2[6];
//     int subject3[6];
//     int subject4[6];
//     int subject5[6];
// 
return 0;
}
