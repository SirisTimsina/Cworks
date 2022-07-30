// a program to convert grade 
#include<stdio.h>

int main(){
    double marks;
    printf("ENter your marks:");
    scanf("%f", &marks);

    if(marks>=0 && marks<=100){  // valid marks input    
        // now we can grade this marks into different category
        if(marks>=80){
            printf("Grade A\n");
        }else if(marks>=65){
            printf("Grade B\n");
        }else if(marks>=50){
            printf("Grade C\n");
        }else if(marks >= 40){
            printf("Grade D\n");
        }else if(marks>=30){
            printf("Grade E\n");
        }else{
            printf("Grade F\n");
        }
    }else{
        printf("Invalid marks entered\n");
    }
}