// Recursion is a technique in which a function calls itself from 
// within the body. This creates a loop like structure. The recursion
// exploits stack to store temporarily the data within calling function
// before moving on to the called function

#include<stdio.h>

long double fact( long double i);

int main(){
    long double num;
    printf("Enter any number: ");
    scanf("%Lf", &num);
    long double result = fact(num);
    printf("The factorial is %Lf \n", result);
    return 0;
}

long double fact(long double i){
    if(i==1)
        return 1;
    else
        return i * fact(i-1);  // this call to itself creates recursion    
}