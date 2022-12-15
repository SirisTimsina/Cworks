#include<stdio.h>
#include<string.h>

int main(){
    char *str1;
    char *str2;
    str1="Nepal";
    str2="NEPAL";

    printf("Str1 length: %lu \n", strlen(str1));
    printf("Str2 length: %lu \n", strlen(str2));

    char fruit1[20] = "Apple";
    char fruit2[10] = "Banana";

    printf("Friut1 compares to Fruits2: %d\n", strcmp(fruit1, fruit2));
    printf("Banana compares to Apple: %d\n", strcmp(fruit2, fruit1));
    printf("Banana compares to Banana: %d\n", strcmp(fruit2, fruit2));
    // -1 if first string is smaller than second string
    // 1 if first string is greater than second string
    // 0 if both strings are equal
    strcat(fruit1,", ");
    strcat(fruit1, fruit2);
    printf("Concatenated String is %s\n",fruit1 );
//     strupr(fruit1);
//    printf("The uppercase string is %s\n", fruit1);
//    strlwr(fruit1);
//    printf("The lowercase string is %s\n", fruit1);
strrev(fruit1);
printf("The reverse string is %s\n", fruit1);
   
return 0;
}