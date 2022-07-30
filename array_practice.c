
#include<stdio.h>

int main(){
    // array is a collection of data of similar type

    int data[10];   // data is a common name for 10 integer values
    data[0] = 12;  // assign 12 as a first element of an array
    data[1] = 21;  // second element
    data[9] = 34;  // last or 10-th element of array of size 10..

    // input array
    for(int i=0; i<10; i++){
        printf("Input data[%d] = ", i);
        scanf("%d", &data[i]);
    }

    // Display array
    for(int i=0; i<10; i++){
        printf("%d\t", data[i]);
    }
    printf("\n");

    char ch[] = { 'a','e','i','o','u'};
    printf("%c \t", ch[0]);
    printf("%c \n", ch[4]);

    
    


}