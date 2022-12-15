// a program to generate multiplication table up to 10 
#include<stdio.h>

int main(){

    for(int i=1; i<=10; i++){

        for(int j=1; j<=10; j++){

            printf("%d\t", i*j);
        }

        printf("\n");
    }
    return 0;
}