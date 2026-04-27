#include <stdio.h>

int main(){
    int a,b,c;
    char choice;

    printf("enter the value of a and b");
    scanf("%d %d", &a, &b);

    printf("select the operator as +,-,*,/");
    scanf("%c", &choice);

    switch(choice){
        case '+': c = a+b;
        printf("the value of addition is %d",c);
        break;

        case '-': c = a-b;
        printf("the value of subtraction is %d",c);
        break;

        case '*': c = a*b;
        printf("the value of multiplication is %d",c);
        break;

        case '/': c = a/b;
        printf("the value of division is %d",c);
        break;

        default: printf("you have enter invalid choice");

    }

return 0;
}
