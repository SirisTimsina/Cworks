// pointer arithmetic we can apply ++ -- + and - operations on a pointer
#include<stdio.h>

int main(){
    int arr[] = {11,22,33,44,55};
    int *par = arr;

    for(int i=1; i<=5; i++){
        printf("\t%p : %d \n", par , *par);
        par++;  
        // when we increment pointer to an array, the value of pointer 
        // ie. the address of array elements increases by 4 to point 
        // to  next element in an array
    }
}
