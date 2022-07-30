// A program to demonstrate the use of functions
#include<stdio.h>
// function declaration: tells compiler that we are using sum function
// later in the program
int sum(int a, int b){    
    // function definition: block of code for function to perform task 
    int r = a + b;
    return r;
}

 int diff(int , int );  // function declaration:  prototype 
// ie no function definnition

int main(){
    int num1, num2, result;
    printf("Enter two numbers:");
    scanf("%d %d" , &num1, &num2);
    result = sum(num1, num2);   
    // function call: control is passed to the function definition part
    printf("The result of sum is %d\n", result);

    result = diff(num1, num2);  // function call to function defined below
    printf("The difference is %d\n", result);
return 0;
}
// function definition for prototype declared above
int diff(int a, int b){
    return a-b;
}
