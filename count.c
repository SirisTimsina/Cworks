// write a program to count the number of times an element is repeated in a loop

#include<stdio.h>

int main(){
    // int arr[] =  {1,3,5,3,5,7,8,2,1,6,1,4};
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }
    int count;
    for(int i=0; i<12; i++){
        // i is ised to select which element is to be counted..
        count = 0;
        for(int j=0; j<12; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        printf("Element: %d, Count: %d \n", arr[i], count);
    }   
}