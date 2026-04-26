#include<stdio.h>
#include<string.h>

int main()
{
    char first_name[50];
    char last_name[50];

    printf("enter your  first name");
    fgets(first_name, 50, stdin);

    printf("enter your second name");
    fgets(last_name, 50,stdin);

    strcat(first_name, last_name);
    printf("your final name is: %s", first_name);

}

