
#include<stdio.h>
#include<string.h>
int main(){
    char fname[] = "Nabin";
    char lname[] = "Joshi";
    char fullName[50];
    strcpy(fullName,fname);
    strcat(fullName," ");
    strcat(fullName, lname);
    printf("Fullname: ");
    puts(fullName);
    printf("Length of name: %lu\n", strlen(fullName));
    return 0;
}