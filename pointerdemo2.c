#include<stdio.h>
/*
to access value stored in  the address we use the unary operator (*)
that returns the value of the variable located at htehe
address by its operand. This is also called Dereferencing.
*/
int main(){

    int num = 10;
    int *p = &num;
    // a pointer variable that holds address of num.

    printf("%d is value of num \n", *p);
    // prints the value at address stored in p.
    // value stored is value of variable "num".

    printf("%p is address of num \n", p);
    // prints the address of num which could be different in each run

    *p = 45;
    // value stored at address is now 45
    // pointer can be assigned a value like this as welll
     printf("%d is value of num \n", num);
    return 0;

}