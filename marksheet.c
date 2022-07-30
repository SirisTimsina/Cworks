// create an array to hold marks of 5 students for 3 subjects
#include<stdio.h>

int main(){
    int marks[5][3];
    // input marks form user..
    for(int i=0; i<5; i++){
        printf("Student %d\n", i);
        for(int j=0; j<3; j++){
            printf("Enter marks for subject %d: ", j);
            scanf("%d", &marks[i][j]);
        }
    }

    // calculate total and average marks of each student and display
    int total, avg;
    printf("%10s%10s%10s%10s%10s\n","Math","Science","English","Total","Average");
    // display marks in tabular format
    for(int i=0; i<5; i++){
        total = 0;    // start total as zero for each student
        for(int j=0; j<3; j++){
        printf("%10d", marks[i][j]);
        total += marks[i][j];     // calculate total marks
        }
        avg= total/3;
        printf("%10d%10d",total, avg);
        printf("\n");
    }

return 0;
}