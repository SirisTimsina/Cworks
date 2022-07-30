// create a function to calculate and display a factorial of a number

#include<stdio.h>

void factorial(int);

int main(){
    int num;
    printf("Enter a number to calculate factorial of: ");
    scanf("%d", &num);

    factorial(num); // function doesnot return a value..
    return 0;
}

void factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    printf("The foctorial of %d is %d\n", n, fact);
    // return type void: so no need to place a return statement
}