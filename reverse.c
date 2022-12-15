// A program to generate a reverse of a number using while loop
#include<stdio.h>

int main(){
    int num, rev=0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
                               // 025 ==>  52
    while(num>0){
        digit = num % 10;   // gives last digit of a num

        rev = rev *10 + digit;  // 0 * 10 + 5  => 5
                                // 5 * 10 + 2  => 52
        num = num/10;  // remove last digit for next iteration
    }
    printf("The reverse number is %d\n", rev);
    return 0;
}


   5 * 1 = 5
   5 * 2 = 10

    1
    1 2
    1 2 3
    1 2 3 4 
    1 2 3 4 5