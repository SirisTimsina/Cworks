// a program to demonstrate the use of arithmetic operator

#include<stdio.h>
int main(){
    int a, b, result;
    printf("Enter values for a and b: ");
    scanf("%d %d", &a , &b); 
    // addition
    result = a + b;
    printf("Sum of %d and %d is %d \n", a, b, result);

    // substraction
    result = a - b;
    printf("Difference of a and b is %d \n", result);

    // product
    result = a * b;
    printf("Product of a and b is %d \n", result);

    // Quetient
    result = a / b;
    printf("Quetient of a and b is %d \n", result);

    // Modulo
    result = a % b;
    printf("Modulus of a and b is %d \n", result);

    return 0;
}