// a demonstrationof math function
#include<stdio.h>
#include<math.h>

int main(){
    int a; 
    printf("ENter a number: ");
    scanf("%d", &a);
    printf("The square is  %f \n", pow(a,2));
    printf("The square root is %f \n", sqrt(a));
    return 0;
}