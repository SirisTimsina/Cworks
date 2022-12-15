//If else statement
#include<stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>=18){
        printf("You are allowed to vote!\n");
        printf("Proceed towards voting area.\n");   
    }else{
        printf("You are not allowed to vote!\n");
        printf("Please exit the voting center.\n");
    }
    return 0;
}