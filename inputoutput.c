
#include<stdio.h>
//  required header file to perform basic input output operation

int main(){
    int a1 = 10;
    // variable declaration and initialization
    printf("The value of a is %d \n", a1);

    int b;  // variable declaration
    printf("The value of b is %d \n", b);  // shows garbage value
    b = 20; // variable initialization or value assignment
    printf("The value of b is %d \n", b);

    // input values form user
    printf("Enter new value for b:");
    scanf("%d", &b);   
  // get the input in integer format and place it at memory location of b
    printf("The new value of b is %d \n", b);
    return 0;
}
