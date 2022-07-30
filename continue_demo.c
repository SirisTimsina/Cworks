//  a program to display sum of even numbers form 1 to 100
// to demonstrate the use of continue keyword
#include<stdio.h>

int main(){
    int sum=0;
    for(int i=1; i<=100; i++){
        if(i%2==1){
            continue; 
            // skips the current cycle of loop if number is odd and
            // move onto next cycle
        }
        sum = sum + i;
    }
    printf("The sum of even numbers is %d\n", sum);
    return 0;
}