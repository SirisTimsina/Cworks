
#include<stdio.h>

int main(){

    // variable declaration
    int a;
    printf("The value of a after decalaration is %d \n", a);

    // shows a garbage value
    a = 25;
    printf("The value of a after initialization is %d \n", a);

    float f = 25.5f;   // variable decalration and initialization
    printf("The value of variable f is %.2f \n", f);

    return 0;
}