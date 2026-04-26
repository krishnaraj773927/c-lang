#include<stdio.h>
#include<string.h>

int main()
{
    int result = strcmp("apple", "banana");
    printf("comparison of apple and banana is :%d\n", result);

    int result1 = strcmp("cherry", "banana");
    printf("comparison of cherry  and banana is :%d\n", result1);
     
    int result2 = strcmp("date", "date");
    printf("comparison of date and date is :%d", result2);

   return 0;
}

