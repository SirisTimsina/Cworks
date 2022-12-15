// A program to check duplicate value and display it
#include<stdio.h>
int main(){
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    int num[n];

    // input array elements
    for(int i=0; i<n; i++){
        printf("num[%d]= ",i);
        scanf("%d", &num[i]);
    }

    // check for duplicate elements
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if((num[i]== num[j]) & (j < i))  // 1 2 3 4 2 1 5
                break;
            if(num[i]==num[j]){
                count++;
            }
            if(j==n-1)  // print only when we finish last comparision
            printf("%d\t%d\n", num[i], count);
        }
        
    }
}