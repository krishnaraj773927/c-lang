#include<stdio.h>

int main()
{
    int a,b,c;

    printf("enter the value of a,b,c");
    scanf("%d %d %d",&a,&b,&c);

    if ((a>b) && (a>c))
    {
        printf("a is greatest number  %d",a);
    }
    else if ((b>c) && (b>a))
    {
        printf("b is geatest number  %d",b);
    }
    else 
    {
        printf("c is geatest number  %d",c);
    }

    return 0;
}