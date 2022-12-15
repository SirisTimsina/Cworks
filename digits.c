// display the digits of a three digit number
#include<stdio.h>
int main(){

    int num, digit;
    printf("Enter a three digit number: ");
    scanf("%d", &num);
    // seperate digits to display 
    for(int i=1; i<=3; i++){
        digit = num % 10 ;     // 123 % 10 => 3
        printf("%d \n", digit);
        // display last digit
        num /= 10;  // num = num / 10;  
        // removes last digit from number
    }
return 0;
}