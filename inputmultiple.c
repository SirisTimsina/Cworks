//input multiple value with single scanf function
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);  // 10 20 30
    printf(" a=%d \n b=%d \n c=%d \n", a,b,c);
    return 0;
}
