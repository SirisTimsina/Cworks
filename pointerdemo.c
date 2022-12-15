#include<stdio.h>
/*
 the output of the program could be different in different 
 runs. Here the program prints address of a variable and a 
 variable can be assigned different address in diffferent
 runs
*/

int main(){
    int x;

    printf("%p \n", &x);
// prints the address of x

    return 0;
}  

