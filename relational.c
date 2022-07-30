
// relational operator operates upon numeric operands and produces a
// boolean result( 1 - true, 0 - false)

#include<stdio.h>

int main(){

int a, b;
printf("Enter values for a and b: \n");
scanf("%d %d", &a, &b);   // 12 21 ==> a=12  b=21

printf("%d is greater than %d? : %d \n", a, b, a > b);
printf("%d is less than %d? : %d\n", a, b, a < b);
printf("%d is greater than equals to %d? : %d\n", a, b, a >= b);
printf("%d is less than equals to %d? : %d\n", a ,b , a <= b);
printf("%d is equals to %d? : %d\n", a, b, a == b);
printf("%d is not equals to %d? : %d\n", a, b, a != b);
return 0;
}