#include<stdio.h>

int main(){

    char name[50];
    printf("Enter your name:\n");   
    // input both first name and last name
    scanf("%s", name);
    printf("Hi user \n");
    printf("%s \n", name);
    scanf("%s", name);
    printf(" %s\n", name);

    char address[100];
    printf("Enter your address:\n");
    fgets(address , 100, stdin);  // dummy input receives blank input
    fgets(address , 100, stdin);  
    // input 100 characters from input stream stdin..
    printf("Address: %s\n", address);

return 0;
}