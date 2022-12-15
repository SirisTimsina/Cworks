// String is a sequence of characters
// string is represented as a character array so we can create
// a character array to hold string value : 
// eg: char country[6] = "Nepal";
//      ['N','e','p','a','l','\0']
// '\0' string terminating character..
#include<stdio.h>

int main(){
    char name[6] = "Sabin";
    printf("The name is %s\n", name);

    printf("The first character is %c \n", name[0]);
    printf("The last character is %d\n", name[5]);  // empty character

char book[] = "C foundation";   // it creates a character array of required size automatically
printf("The string is \"%s\" and its length is %lu bytes\n", book, sizeof(book));
// the length includes '\0' end of string character as well

// char c[6];
//     c = "Nepal";

    char c[ ] = {'N','E','P','A','L','\0'};
    printf("String : %s \n", c);
    printf("length : %lu \n", sizeof(c));

    char *fruit;
    fruit = "Apple";
    printf("Fruits is %s \n", fruit);
    
return 0;
}