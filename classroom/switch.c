#include<stdio.h>

int main()
{
    int day;
    printf("enter the days between(1-7)");
    scanf("%d", &day);

    switch (day){
    
    case 1: printf(" toaday is monaday ");
    case 2: printf("today is tuesday");
    case 3: printf(" toaday is wednesday ");
    case 4: printf(" toaday is thrusday ");
    case 5: printf(" toaday is friday ");
    case 6: printf(" toaday is saturady ");
    case 7: printf(" toaday is sunday ");

}
return 0;

}