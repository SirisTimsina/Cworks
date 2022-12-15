// a program to sort an array
// sort and display the sorted array
    /*
        { 23, 12, 5, 56, 49, 1, 37}
        { 12, 23, 5, 56, 49, 1, 37}
        { 5, 23, 12, 56, 49, 1, 37}
        { 1, 23, 12, 56, 49, 5, 37}

        { 1, 12, 23, 56, 49, 5, 37}
        { 1, 5, 23, 56, 49, 12, 37}

        { 1, 5, 23, 56, 49, 12, 37}
        { 1, 5, 12, 56, 49, 23, 37}

        { 1, 5, 12, 56, 49, 23, 37}
        { 1, 5, 12, 49, 56, 23, 37}
        { 1, 5, 12, 23, 56, 49, 37}

         { 1, 5, 12, 23, 56, 49, 37}
          { 1, 5, 12, 23, 49, 56, 37}
          { 1, 5, 12, 23, 37, 56, 49}

          { 1, 5, 12, 23, 37, 56, 49}
          { 1, 5, 12, 23, 37, 49, 56}
    */
#include<stdio.h>
int main(){
    int arr[] = { 23, 12, 5, 56, 49,1, 37}; 
    for(int i=0; i<6; i++){
        for(int j=i+1; j<7; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
   // display sorted array
    for(int i=0; i<7; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
   return 0;
   }