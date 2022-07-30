#include<stdio.h>
#include<string.h>

void invert(char str[]){
    
    for(int i=0; i<sizeof(str)-2; i++){
        printf("%c", (char)str[i]);
    }
    printf("\n");
}

int main(){
    char str1[] = "Nepal";
    printf("%s\n", str1);
    char str2[6] = "Nepal";
    printf("%s\n", str2);
    char str3[] = {'N','E','P','A','L','\0'};
    printf("%s\n", str3);
    char str4[6] = {'N','E','P','A','L','\0'};
    // call a function with string parameter..
    invert(str4);
    // invert another string by passing string directly
    invert("Apple");
    // other string output functions..
    puts(str4); 
    fputs(str4, stdout);   
    // have to tell to output string in specified device or file

    char name[20];
    // printf("\nEnter name");
    // scanf("%s", &name);  // only inputs character until white space
    // printf("Your name is %s\n", name);   
    // to input full name
    printf("Enter full name:");
    gets(name);
    printf("Full name is %s\n", name);
    char message[50];
    printf("Enter message: ");
    fgets(message,50 , stdin);
    printf("Message: %s\n", message);

    printf("Length of %s is %lu \n", name, strlen(name));

    printf("Concat %s \n",  strcat(name,message));

    printf("Compare: %d\n", strcmp(str2, str3));
    // returns 0 if equal, 
    // first is larger: returns +ve, 
    // second is larger: retursn -ve

    printf("Copy: %s\n", strcpy(str1, str4));

    // String using character pointer..
    char * addrss = "Putalisadak, Kamalidi Mod";
    printf("%s\n", addrss);

return 0;
}