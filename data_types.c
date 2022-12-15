
#include<stdio.h>

int main(){
    int a;
    printf("Enter integer value: ");
    scanf("%d", &a);
    printf("Value of a is %d \n", a);

    float f;
    printf("Enter float value: ");
    scanf("%.3f", &f);    // %f is a format specifier
    printf("The float value is %f \n", f);

    double d;
    printf("Enter double value:");
    scanf("%.4lf", &d);
    printf("The double value is %lf \n", d);

    char c;
    printf("Enter character value:");
    scanf(" %c", &c);
    printf("The input character is %c \n", c);
    printf("It's ASCII equivalent is %d \n", c);
    return 0;
}