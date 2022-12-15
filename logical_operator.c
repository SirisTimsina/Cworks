// Logical operator operates upon boolean values and produces a boolean 
// reasult. The operands of a logical operator could be an integer 
// variables with either 1 or 0 value(considered as boolean/logical values)
// or an relational(which produces a boolean result) or other logical operation  
#include<stdio.h>

int main(){
    int a =0, b=1;

    printf("a & b = %d\n", (a & b) );  // AND Operation
    printf("a | b = %d\n", (a | b) );  // OR operation
    printf(" !a is %d \n", !a );       // NOT OPERATION

    int num = 234;
    printf("Number is both positive and even? %d\n", (a>=0 & a%2==0));
    printf("Number is either negaive or odd ? %d\n", (a<0 | a%2==1));

     printf("Number is both negative and even? %d\n", (a<0  && a%2==0)); 
                                                 //     0   &&  X  ==> 0
    printf("Number is either positive or odd ? %d\n", (a>=0 || a%2==1));
                                                //      1   ||   X  ==> 1
return 0;
}