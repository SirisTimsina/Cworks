// Relational or comparision operator
// compares two numbers and produces an outcome 1 for true or 0 for flase
#include<stdio.h>

int main(){
    int a=20;
    int b = 30;

    printf("a is greater than b : %d \n",a>b);
    printf("a is less than b : %d \n", a < b );
    printf("a is greater than equals to b : %d \n", a >= b );
    printf("a is less than equals to b : %d \n", a <= b );
    printf("a is equals to b: %d \n", a == b );
    printf("a is not equal to b : %d \n", a != b );
    return 0;
}