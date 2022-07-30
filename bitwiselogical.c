// when we operate logical operation on numeric values
// it will perform bitwise logical operation and 
// produces a result which is also a number 

#include<stdio.h>

int main(){
int a = 25, b=37;
// bitwise logical
printf(" a & b : %d\n", a & b); // Bitwise-and
printf(" a | b : %d\n", a | b); // Bitwise-or
printf(" a ^ b : %d\n", a ^ b); // Exclusive-or
printf(" ~ a : %d\n", ~a);      // 2's Complement

// bitwise shift
// shifts individual bits of an integral number either
// left or right by n-bits
// shift left by 1-bit is equivalent to multiply by 2
// shift right by 1-bit is equivalent to divide by 2 
printf("Left shift %d by 1 bit : %d \n", a, a<<1);
printf("Right shift %d by 1 bit : %d \n", a, a>>1);

// we can also shift bitwise by any number of bits
printf("Left shift %d by 2 bit : %d \n", a, a<<2);
printf("Right shift %d by 3 bit : %d \n", a, a>>3);

// we can see that the value of variable is unchanged
// if we want to update the variable with the 
// shifted value we may use this in combination 
// with assignment operator as well
printf("Left shift 1 bit : %d \n",  a<<=1);
printf("Right shift 1 bit : %d \n", a>>=1);
return 0;
}
