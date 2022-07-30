#include<stdio.h>

int main(){
    int a= 10;
    int *p = &a;
    int **pp = &p;

    printf("Value of a is: %d, %d, %d \n", a, *p, **pp);
    printf("Address of a is: %p, %p, %p \n", &a, p, *pp );
    printf("Address of pointer is: %p, %p \n", &p, pp);

return 0;
}