// logical operand taken logical operand (1/0 for true/fasle) 
// and produces a logical result(1/0) 
#include<stdio.h>

int main(){
int a = 1;
int b = 0;

int result = a & b;
printf("%d & %d : %d \n", a, b, result);

result = a | b;
printf("%d | %d : %d\n", a,b,result);

result = !a;  // 1-->0 ,  0-->1
printf("Not of %d is %d \n", a, result);

// find if both the numbers are positive and not-equal 
result =  a >= 0 && b >= 0 && a != b;
// a >= 0 && b >= 0 && a != b;
//  1 && 1 && 1;
//        1 && 1
//          1
printf("The numbers are positive and unequal: %d\n", result);
return 0;
}