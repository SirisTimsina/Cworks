
// Arithmetic operators operate upon numberic operands
// (char,int, long, float, double, 122, 33.55)
// and the result is also a number

#include<stdio.h>

int main(){
    int a = 12,b = 21;
    int result = a + b;
    printf("Sum of %d and %d is %d\n", a, b, result);
    result = a - b;
    printf("Difference of %d and %d is %d \n", a, b, result);

    printf("Product of %d and %d is %d\n", a, b, (a * b));
    printf("Division of %d and %d is %d\n", a, b, a / b );
    printf("Modulo of %d and %d is %d\n", b, a, (b % a));
    return 0;
}