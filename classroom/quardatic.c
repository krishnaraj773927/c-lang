#include<stdio.h>
#include<math234.h>

int main()
{
    int a,b,c,d;;
    
    double root1, root2;
    printf("enter the value of a,b ,c where a*x*x + b*x + c = 0\n");
    scanf("%d %d %d",&a ,&b, &c);

    d = b*b-4*a*c;
    if (d<0)// complex root 
    {
        printf("first root = %.2lf + j%2lf\n", -b/(double)(2*a),sqrt(-d)/(2*a) );
        printf(" second root = %.2lf - j%2lf\n", -b/(double)(2*a),sqrt(-d)/(2*a));

    }
    else { // real root 
        root1 =(-b + sqrt(d)/(2*a));
        root2 =(-b - sqrt(d)/(2*a));

        printf("Root1 = %.2lf\n",root1);
        printf("Root2 = %.2lf\n",root2);
        
    }
    return 0;
}