// functions are a block of code designed to perform a specific task.
// They provide a code reuse so we dont have to write same code again and again
// Once we define a function we can simply call them from any part of a 
// program to perform the task 
// function provide a modular structure to a program
// program becomes easy to maintain

#include<stdio.h>
// function prototype or function declaration
void sum();

int main(){
    // add two numbers and display their sum
    sum();    // function called
    // perform sum again
    sum();   // function called second time
return 0;
}

// function definition
 void sum(){
    int a, b, s;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    s = a+b;
    printf("The sum is %d\n", s);
}