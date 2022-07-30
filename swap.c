// call by value Vs Call By reference
#include<stdio.h>

void swap(int n, int m){
    int t;
    t = n;
    n = m;
    m = t;
    printf("During swap the values are: n=%d and m=%d\n", n,m);
}

void exchange(int *a, int *b){  
    // *a and *b are variables that stores address of another integer variable
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("During exchange the values are : n=%d and m=%d \n", *a, *b);
}

int main(){
    int n,m;
    printf("Enter two values: ");
    scanf("%d %d", &n, &m);
    printf("Before swap the value are: n=%d and m=%d\n", n,m);
    swap(n,m);  
     // call by value: ie . the value is passed on as a copy to a variable 
     // inside a called function
    printf("After swap the value are: n=%d and m=%d\n", n,m);

     // call by reference: the actual address of the value is passed into the
     // called function so that the actual content is modified
    exchange(&n,&m);   // pass address to pass argument as a reference
    printf("After exchange the value are: n=%d and m=%d\n", n,m);

   return 0;
}

