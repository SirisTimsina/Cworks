#include<stdio.h>

int main(){
    // a simple for loop to count form 1 to 10
    for(  int i=1;  i>=-10;   i--  ){

        printf("%d\t", i);
    }
    printf("\n");

/*
    for( ; ; ){ // this creates infinite loop
       printf("*") ;
    }
*/

// a program to calculate sum of first 100 natural numbers
int sum=0; 
for(int i=1; i<=100; i++){
    sum += i;       // a += b ==> a = a + b;
}
printf("The sum of first 100 natural numbers is %d\n", sum);

int j=1;  
for( ; j<=10;   ){
    printf("%d\t", j);
    j++;
}
// initializing a variable outside can also be done 

for(j=0; j<20; j++){
// since j has been declared ablve this for loop so we do not need to
// declare it again..
}
return 0;
}