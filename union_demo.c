// demonstrate the use of uniion

#include<stdio.h>
#include<string.h>
union country{
   char name[20];  // 20 Byte
   char code[5];   // 5 Byte
   int zip;        // 4 Byte
                // Struct: 29 Byte
                // Union : 20 Byte
};

int main(){
 union country c;
 strcpy(c.name, "F.Republic of Nepal");
    printf("Name: %s\n", c.name);
    printf("Ccode: %s\n", c.code);
    printf("Zip: %d\n", c.zip);

    strcpy(c.code, "NP");
    printf("Name: %s\n", c.name);
    printf("Ccode: %s\n", c.code);
    printf("Zip: %d\n", c.zip);

    c.zip = 977;
    printf("Name: %s\n", c.name);
    printf("Ccode: %s\n", c.code);
    printf("Zip: %d\n", c.zip);
return 0;
}