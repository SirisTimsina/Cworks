// a program to show sizes of datatypes or variables in c
#include<stdio.h>

int main(){
    int a=23;
    printf("size of a is %lu \n", sizeof(a));  
    // what is the memory size of variable a 
    printf("size of integer is %lu \n", sizeof(int) );
    // what is the size of integer data type

    printf("Size of long is %lu \n", sizeof(long));

    printf("Size of float is %lu \n", sizeof(float));

    printf("Size of double is %lu \n", sizeof(double));
 
    printf("Size of character is %lu \n", sizeof(char));
return 0;
}