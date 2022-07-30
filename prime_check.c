// A program to genetrate prime between 1 and 50

#include<stdio.h>

int main(){
    int isPrime;  // holds 1 if the number is prime or else holds 0
    for(int i=1; i<=50; i++){
        isPrime = 1; // suppose the current value of i is prime
        for(int j=2; j < i; j++){
            if(i % j == 0){
                isPrime = 0; // not prime proved..
                break;
            }
        }
        if(isPrime){
            printf("%d\t", i);
        }
    }
return 0;
}
