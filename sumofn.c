// display the sum of first n natural numbers
#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter any number: ");
    scanf("%d", &n);

    for(int i=1; i<=n, i++){   // iterates to sum  from i = 1 to i = n
        sum = sum + i;
    }

    printf("Sum of %d natural numbers is %d\n", n, sum);
    return 0;
}
