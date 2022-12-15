// a function calling iteself from within a function is called recursion
// it creates a loop like behavoiur
// it used an internal datastructure(stack) to store data of before jumping
// on to execute itself again in recursion
#include<stdio.h>

int fact(int i){
    if(i==1)
        return 1;
    return i * fact(i-1);   // recursive function call
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int f = fact(num);
    printf("The factorial of %d is %d \n", num, f);
    return 0;
}