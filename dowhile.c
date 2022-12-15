// student record system

#include<stdio.h>

int main(){
    int roll;
    char name[20];
    char address[20];
    double marks;
    char choice;
    // input student record and display it 
    do{
        printf("ENter your roll no: ");
        scanf("%d", &roll);
        printf("Enter your marks: ");
        scanf("%lf", &marks);
        gets(name);
        printf("Enter your name: ");
        fgets(name, 20, stdin);
        printf("Enter your address: ");
        fgets(address, 20, stdin);

        printf("Name: %s\n", name);
        printf("Address: %s\n", address);
        printf("Roll: %d\n", roll);
        printf("Marks: %lf\n", marks);

        printf("Want to repeat for another student?(y/n): ");
        scanf("%c", &choice);
    }while(choice=='y');
}