#include<stdio.h>
/*
Unary operator * is used to declare a pointer variable 
*/
int main(){

int x = 10;
// 1) when we declare a variable with * infront it 
// becomes a pointer variable( a variable that 
// stores address of another variable).
// 2) Since there is int before *, ptr is a pointer
// to an integer type variable

int *ptr;
ptr = &x;
// here the address of x is assigned to a ptr

printf("%p is address of x \n", ptr);
printf("%d is value of x \n", *ptr);
return 0;
}