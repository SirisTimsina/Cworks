// A pointer is also a variable, but unlike other variables, it is 
// only used to store an address of other variables, so that it can a
// access the contents of a varible directly form memory, without using 
// that variable
#include<stdio.h>

int main(){
    int a = 10;
    int *ptr;   // declaring a pointer variable of type int 
                // ie. holds address of integer variable
    ptr = &a;  // assign an address of integer variable a;

    printf("The address of a id %p\n", &a);  
    printf("The value of a is %d\n", a);

    printf("The address of a id %p\n", ptr);   // ptr contains address
    printf("The value of a is %d\n", *ptr);    // *ptr points to address
    // *ptr thus accesses the value using the address stored in a pointer

    *ptr = 13;
    // stored a value to an address pointed by ptr
    printf("The new value of a is %d\n", a);

    return 0;
}