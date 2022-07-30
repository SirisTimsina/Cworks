// a program to demonstrate the use of an array
#include<stdio.h>

int main(){

// declare an array
int arr[5];
// contiguous memory has been reserved for five integer values

// add elements individually
arr[0] = 12;  // assign 12 as a first array element
arr[1] = 32;  // second element
arr[2] = 43;
arr[3] = 14;
arr[4] = 26;  // last array element for array of size 5

// use is a calcualtions as
int sum = arr[0]+ arr[4];  // 12 + 26 = 38
printf("Sum is %d\n", sum);

// display individual 
printf("Second element is %d\n", arr[1]);
printf("Fourth element is %d\n", arr[3]);

// display or access all array elements using loop
for(int i=0; i<5; i++){
    printf("%d\t", arr[i]);
}

// we can create an array of known elements..
int odds[5] = {1, 3, 5, 7, 9};
int evens[] = {0, 2, 4, 6, 8};

// input array elements by user 
int data[5];
for(int i=0; i<5; i++){
    printf("Enter data[%d]= ", i);
    scanf("%d", &data[i]);
}
//Display 
printf("Array elements are: \n");
for(int i=0; i<5; i++){
    printf("%d \t", data[i]);
}
printf("\n");

// dynamic array
int n;
printf("Enter number of subjects: ");
scanf("%d", &n);
int marks[n];
// creates an array that can hold n number of elements at runtime
for(int i=0; i<n; i++){
    printf("Marks[%d]= ", i+1);
    scanf("%d", &marks[i]);
}
// calculate and display total marks and average marks..



}