
#include<stdio.h>
int main(){
    int a=0, b=1;
    int n, next;
    printf("Enter number of fibonacci terms: ");
    scanf("%d", &n);
    // generate next number in fibonacci series and display
    for(int i=1; i<=n; i++){
        next = a + b;
        printf("%d\t", next);
        // update a and b for next-cycle
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
} 