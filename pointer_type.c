// pointer can be declared of any data type
#include<stdio.h>

int main(){
    int *pi;
    double *pd;
    float *pf;
    char *pc;
    // whatever the type of pointer it is, all they store
    // is an address of a memory location, in hexadecimal
    // format, and is similar to all type of variables
    // well it can also store an address of another pointer,
    //  ie. pinter to a pointer
    int **pptr;

    int a = 10;
    double d = 12.5555;
    float f = 12.44;
    char c = '^';

    pi = &a;
    pd = &a;  // this could throw an error
    pf = &f;
    pc = &c;

    printf("Integer vallue is %d\n", *pi);
    printf("Double value is %.2f\n", *pd);
    printf("Float value is %.2f\n", *pf);
    printf("Character value is %c\n", *pc);

return 0;
}