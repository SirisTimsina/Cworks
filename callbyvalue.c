// a program to demonstrate call-by-value in function call
#include<stdio.h>

void swap(int, int);

int main(){
    int x = 10 ,y = 20;
    printf("Before swap: \n");
    printf(" x = %d \n y = %d \n", x, y);

    swap(x, y);
    // When we call a function by providing parameter value or by passing
    // a variable, the value is copied into parameter variable 
    // so any change we made within swap method is seen only within that method
    // the original variables remains unchanged
    
    printf("After swap: \n");
    printf(" x = %d \n y = %d \n", x, y);
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("During swap: \n");
    printf(" x = %d \n y = %d \n", a, b);
}