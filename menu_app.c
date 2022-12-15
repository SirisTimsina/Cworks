#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Welcome to Telephone billing system\n");
    printf("Our services:\n");
    printf("1. View pending bills\n");
    printf("2. Pay pending bills\n");
    printf("3. Report an issue\n");
    printf("4. View notice\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);

    switch(choice){
        case 1: 
            printf("Displaying pending bills\n");
            // statements to gather and display pending bills
            break;
        case 2:
            printf("Your bill has been paid\n");
            break;
        case 3: 
            printf("Your issue has been registered\n");
            break;
        case 4:
            printf("View all notices..");
            break;
        case 5:
            printf("Exiting..");
            exit(0);
            break;
        default:
            printf("Entered wrong choice\n");
   }
   printf("Visit agian\n");
   return 0;
}