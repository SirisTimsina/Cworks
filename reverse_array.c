// A program to reverse an array
#include<stdio.h>

int main(){
    int array[] = {2,4,6,8};
    int reverse[4];

    for(int i=0; i<4; i++){
        reverse[i]= array[3-i];
    }

    for(int i=0;i<4; i++){
        printf("%d", reverse[i]);
    }
}