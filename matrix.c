// write a programm to crate a matrix of size n * m 
// input all the elementz and display them in a matrix form..

/*
Dynamica array declaration..

int n;
pritnf("Enter array size:")
scanf("%d", &n);
int arr[n];  // user can decise upon the size of an array at runtime

int n,m;
printf("ENter size of 2 dimensional array: ");
scanf("%d %d", &n, &m);
int matrix[n][m];

*/
// input the size of a matrix dynamically and show the sum of two matrices 
#include<stdio.h>
int main(){
    int n,m;    // size of a 2-d array
    printf("Enter size of an array:");
    scanf("%d %d", &n , &m);   // eg:  2 3 
    int a[n][m], b[n][m];
    // input elements for these two matrices
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("B[%d][%d]= ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    // declare sum matrix and perform sum of two matrices a and b
    int sum[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum[i][j] = a[i][j] + b[i][j];
            printf("\t%d", sum[i][j]);
        }
        printf("\n");
    }
}
// multiplication = . n * m   m * o . => . n * o