// example of function call using reference variable
#include<stdio.h>
void swap(int *, int *);

int main(){
    int x=10, y=20;
    printf("Before swap: \n");
    printf(" x = %d \n y = %d \n", x, y);
    swap(&x, &y);
    // actual address or reference of a variable has been passed to a finction, 
    // so any changes made to the value is applid to the original content in memory
    printf("After swap: \n");
    printf(" x = %d \n y = %d \n", x, y);
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;   // swaps the content in memory location specified by the pointer
    printf("During swap: \n");
    printf(" x = %d \n y = %d \n", *a, *b);
}