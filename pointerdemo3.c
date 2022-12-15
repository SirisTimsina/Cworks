/*
Arithmetic operations on pointers:
1. incremented
2. decremented
3. an integer may be added to a pointer(+ or +=)
4. an integer may be substracted form a pointer(- or -=)
Pointer arithemetic is useful only to an array
*/
#include<stdio.h>

int main(){
    int arr[] = {1,2,3};
    int *ptr;
    // declare pointer variable of type integer

    ptr = arr;
    // assigns the address of arr[0] to a ptr
    // Array name acts as a pointer constant. The value of
    // of this pointer constant is the address of the first
    // element
    for(int i=0; i<3; i++){
        printf("value of *ptr = %d \n", *ptr);
        printf("value of ptr = %p \n", ptr);
        ptr++;
    }
return 0;
}