// declaring arrays 
#include<stdio.h>

int main(){
    // when we declare an array with known values we declare it statically
    char vowels[]= {'a', 'e', 'i', 'o', 'u'};
    int odds[] = { 1, 3, 5, 7, 9 };

    printf("The first vowel is %c\n", vowels[0]); // first element has index value of 0
    printf("The last vowel is %c\n", vowels[sizeof(vowels)-1]); //index of last element is(5-1) 
    // to access all elements we can use for loop
    for(int i=0; i<5; i++){
        printf("%c\n", vowels[i]);
    }

    odds[2] = 11;  // place 11 in third position ie. { 1, 3, 11, 7, 9 }
    odds[5] = 53;  
    // { 1, 3, 11, 7, 9 } 55 ie. 55 is outside the boundry of an array so others can modify it
    // this is not appropriate as we do not have 6th position (index-5) in array of size 5

    // we can use array in claculations like any other variables
    int result = odds[0] + odds[2] * odds[4];
    printf("The result is %d\n", result);
    return 0;
}