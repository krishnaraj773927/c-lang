#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];
    printf("enter your name");
    fgets(name, 50, stdin);

    int size = strlen(name);
    printf("the length of yoyr name is: %d", size);

}