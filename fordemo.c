// a program to demonstrate for loop

#include<stdio.h>

int main(){

    // display Hi five times
    for(int i=1; i<=5; i++)
        printf("Hi\n");
    // no need to place braces if for loop body has 
    // has single statement

    int j;
    for(j=5; j>0; j--){
        printf("%d \t", j);
    }
    printf("\n");

    // display even numbers between 50 and 100
    for(int i=50; i<=100; i++){
        if(i%2==0){    // display only even values of i
            printf("%d\n", i);   
        }
    }

    for( int i=1;i>=0;i++ ){    // infinite loop
        printf("%d\t", i);
    }


}