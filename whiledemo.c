/* 
While loop: entry controlled, ie. first the condition is checked and 
decide whether to execute a body of a loop or not
syntax:  while (Condition_check){
          // body of while loop
        }
*/

// display the sum of first n natural numbers whose sum is just greater than 1000
#include<stdio.h>
int main(){
    int sum=0, n=1;

    while(sum<=1000){
        sum = sum + n;
        n++;
    }
    printf("Sum of first %d natural numer is %d\n", (n-1), sum);
    return 0;
}