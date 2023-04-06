#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sum(int a, int b){
    return a+b;
}
int subtraction(int a, int b){
    return a-b;
}
int multiplication(int a, int b){
    return a*b;
}
double division(int a, int b){
    return (double)a/b;
}
int power(int a, int b){
    int product;
    for(int i=0;i<b;i++){
        product*=a;
    }
    return product;
}
int main()
{
    int a,b;
    printf("Please enter the calculation you want to perform: \n");
    printf(" + Sum\n - Subtraction\n * Multiplication\n / Division\n s Square Root\n p Power\n");
    char operation;
    scanf("%c",&operation);
    if(operation=='+'){
        scanf("%d%d",&a,&b);
        printf("%d+%d=%d",a,b,sum(a,b));
    }
    else if(operation=='-'){
        scanf("%d%d",&a,&b);
        printf("%d-%d=%d",a,b,subtraction(a,b));
    }
    else if(operation=='*'){
        scanf("%d%d",&a,&b);
        printf("%d*%d=%d",a,b,multiplication(a,b));
    }
    else if(operation=='/'){
        scanf("%d%d",&a,&b);
        printf("%d/%d=%d",a,b,division(a,b));
    }
    else if(operation=='s'){
        scanf("%d",&a);
        printf("Square root of %d = %.2f",a,sqrt(a));
    }
    else if(operation=='p'){
        scanf("%d%d",&a,&b);
        printf("%d^%d=%d",a,b,power(a,b));
    }
    return 0;
}
