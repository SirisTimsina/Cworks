/* 
conditional operation syntax :
    expression1 ?  expression2 : expression3 ;
expression 1 is a condition check if true: expression2 is selectedand returned
otherwise expression3 is selected and returned
*/
#include<stdio.h>
int main(){
    int a= 43, b = 23;  // let a and b be distances
    
    int diff = a > b ? a - b : b - a ;
    printf("The difference between a  and b is %d \n", diff);

    int max = a > b ? a : b ;
    printf("The larger of two numbers is %d \n", max);

    int max_var = a > b ? 'a' : 'b' ;  // equivalent to if-else statement
    printf("The larger variable is %c \n", max_var);
  return 0;
}
