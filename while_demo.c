
// a program to demonstrate the use of while itterative statement
#include<stdio.h>

int main(){
    int control = 1;

    // while(control){     
    //     // logical value of 1 is true so the loop repeats until infinity
    //     printf("Hi\n");
    // }

    while(control <= 10){
        printf("Hi\n");
        control++;
    }
    // printf Hi 10 times

    int sum=0;
    // add sum of natural numbers just greater than 1000
    int n=1;
    while(sum<=1000){
        sum = sum + n++;
        // n++;
    }
    printf("Sum of natural numbers just above 1000 is %d\n", sum);

    // enter student record and display it
     char choice;
   do{
    printf("Enter your name: ");
    char name[20];    // " 'n','e','p','a','l','/0' "
    int age;
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Hi user %s!\n", name);
    if(age>=18){
        printf("You are allowed to vote!\n");
    }else{
        printf("You are not allowed to void!\n");
    }
    printf("Do you want to repeat for ner user?(y/n): "); 
    scanf(" %c", &choice);
   }while(choice=='y' || choice=='Y');
    
    return 0;
}