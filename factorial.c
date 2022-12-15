#include<stdio.h>
// find out the factirial of a given number using for loop
int main(){
    int num, fact=1;
    printf("Enter a number to calculate factorial of: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        fact *= i;
    }

    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}