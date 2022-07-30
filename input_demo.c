// demonstrate input and output in c 

#include<stdio.h>

int main(){

    int a;  // daclare a variable before using
    printf("Enter integer value: \n");
    scanf("%d", &a);   
    // "%d" says to input from user in integer format
    // &a tells program to store that input at the address of a

    float f;
    printf("Enter float value: \n");
    scanf("%f", &f);    // format specifier of float is %f

    long l; 
    printf("Enter long value: \n");
    scanf("%ld", &l);

    double d;
    printf("Enter double value: \n");
    scanf("%lf", &d);

    char c;
    printf("Enter a character: \n");
    scanf("%c", &c);

    printf("Values are : %d, %f, %ld, %lf, %c \n",a, f, l, d, c);
    return 0;
}