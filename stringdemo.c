// string declaration and its major function that transform it

#include<stdio.h>
#include<string.h>

int main(){

    char major[20]= "Science";
    char batch[] = {'B','S', 'c','\0'};   // allocates 4 character space
    // major="Science";

    char *name;
    name = "Nabin";

    printf("%c", *name);   // name gives an address of first character in a memory
    printf("%c", *(name+1) );
    printf("\n");
    printf("%s \n", name);

    char country[20] = "Nepal";
    printf("Reverse String:");
    //  strrev(country);
    printf("%s\n",country);   // *name gives the value ie. String saved in memory

    printf("%d\n",strcmp(name, country));  
     // -1 if first is small, 0 if equal, 1 if greater
return 0;
}