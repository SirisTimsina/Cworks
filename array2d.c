// demonstrate the use of multi dimensional array
#include<stdio.h>

int main(){
    int arr[3][3];
    // this array has 3 no. of rows and 3 no. of cols
    arr[0][0] = 12; // assign value  to element at first row first column
    arr[0][1] = 21;  // assign value to element at first row second column

    // or we can automate the assignment process with input value using for loop
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Enter array element(%d,%d)=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // display array elements individually
    printf("array[0][0] = %d",  arr[0][0]);  // display value at position (0,0)
    printf("array[1][2] = %d",  arr[1][2]);  // display value at position (1,2)

    // display all elements at once using for loop like a matrix
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    

}
