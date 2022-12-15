// a program to display pyramid patterns
#include<stdio.h>

int main(){
    for(int i=1; i<=5; i++){
        // to print gap
        for(int j=1; j<=5-i; j++){
            printf(" ");  // print one blank space
        }
        // print * character in same line
        for(int k=1; k<=i; k++){
            printf("* ");
        }
        // print new line
        printf("\n");
    }
    return 0;
}