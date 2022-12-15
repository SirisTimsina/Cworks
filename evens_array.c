// Evens array is an array that contains all even elements 
// {2, 4, 6, 8} is an evens array
// { 2, 5, 6, 8} is not an evens array as second element is odd
// display if an input array is an evens array or not..
#include<stdio.h>
int main(){
    int arr[5] = {1, 0, 1, 0, 1, 0};
    int isEvens = 1;   // suppose the array is evens array
    for(int i=0; i<5; i++){
        if(arr[i]%2==0){
            continue;    // skips the current iteration..
        }
        isEvens = 0;
        break;     // terminates the loop
    }
    if(isEvens==1){
        printf("The array is an evens array..");
    }else{
        printf("The array is not an evens array..");
    }
    return 0;
}