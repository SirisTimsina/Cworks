// Bitwise logical operator operates upon individual bits of a number
#include<stdio.h>

int main(){
    int a=20;
    int b=30;

    printf("Bitwise logical operation:\n");
    printf("%d & %d = %d \n", a, b, a & b);
    printf("%d | %d = %d \n", a, b, a | b);
    printf("%d ^ %d = %d \n", a, b, a ^ b);
    printf(" ~ %d =  %d \n", a,  ~a);
    
    // shift operation
    printf("Right shift %d by 1 bit : %d \n", a, a>>1);
    printf("Right shift %d by 2 bit : %d \n", a, a>>2);

    printf("Left shift %d by 1 bit : %d \n", a, a<<1);
    printf("Left shift %d by 2 bit : %d \n", a, a<<2);

    // shift and update
    printf("Left shift %d by 1 bit : %d \n", a, a<<=1);
    // this shifts the value and updates a with new shifted value

    return 0;
}