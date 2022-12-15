// a program to display even numbers between 20 and 50
#include<stdio.h>

int main(){
    for(int i=20 ; i<=50 ; i++ ){
        if(i % 2 == 0){
            printf("%d \t", i);
        }
    }
    printf("\n");
return 0;
}