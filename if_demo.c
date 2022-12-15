// demonstrate the use of if statement
#include<stdio.h>

int main(){
    int a = 21;
    int b = 35;
    // display if the number is multiple of 3
    if(a%3==0)
        printf("The number %d is divisible by 3\n", a);
    // the above condition is true, so the statement is executed..
    if(b%3==0)
        printf("The number %d is divisible by 3\n", b);
    // the above condition is false, so the statement is skipped..
    return 0;
}