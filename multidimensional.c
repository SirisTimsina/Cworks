// multidimensional array adds mome dimention to an array
/*
float marks[7];         // marks of 7 subjects in one dimensional array
float marks[10][7];     // marks of 7 subjects for 10 students in 2 dimensional array
*/
#include<stdio.h>

int main(){
    int marks[7][5]; // first index is for row, second index is for column
    // input marks of 7 students for 5 subjects
    for(int i=0; i<7; i++){ 
        printf("Enter marks for student %d:\n", i+1);
        for(int j=0; j<5; j++){
            printf("subject%d: ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    for(int i=0; i<7; i++){
        for(int j=0; j<5; j++){
            printf("%10d\t", marks[i][j]);
        }
        printf("\n");
    }
return 0;
}

