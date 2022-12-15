#include<stdio.h>

// a program to check if the input character is vowel or not
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    
    switch(ch){
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Small Letter Vowel\n");
           break;
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Capital Letter Vowel\n");
            break;
        default:
            printf("Not Vowel\n");
    }
    return 0;
}