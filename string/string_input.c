#include<stdio.h>

int main()
{
    char name[50];
    // printf("enter your name: ");
    // gets(name);  // not in production  code 
    // printf("good morning");
    // puts(name);

    printf("now enter your nickname");
    fgets(name, sizeof(name),stdin);
    printf("good morning ");
    puts(name);

    return 0;
}