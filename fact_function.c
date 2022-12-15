// write a program wuth function to calculate factorial
// call this function from main and display a factorial for
// numbers from 5 to 10 using for loop
#include<stdio.h>

int factorial(int n){
    int f=1;
    for(int i=1; i<=n; i++){
        f = f * i;
    }
    return f;
}

int main(){
// calcualte factorial of numbers form 5 to 10
    for(int i=5  ; i<=10 ; i++  ){
        int fact = factorial(i);
        // display factorial of numbers
        printf("%d ! = %d \n", i, fact);
    }
    return 0;
}