
// demonstrate the use of enum

#include<stdio.h>

enum colors { red=7 , green=4, blue };
// enum rainbow { red, yellow, vialot, orange, blue, purple, green};
int main(){
    enum colors c = blue;
    // enum rainbow r = yellow;
    printf("The colour red is %d\n", c);
return 0;
}