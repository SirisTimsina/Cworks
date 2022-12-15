// a program to demonstrate the use of switch as a multibranch statement

#include<stdio.h>
// display a day name for day number input by user
int main(){
   int day;
    printf("Enter a day by number:");
    scanf("%d", &day);  // input numbers from 1 to 7
    // we can only pass integer's and character's as a switch parameter
    switch(day){
        case 1:
            printf("The day is Sunday\n");
            break;
        case 2:
            printf("The day is Monday\n");
            break;
        case 3:
            printf("The day is Tuesday\n");
            break;
        case 4: 
            printf("The day is Wednesday\n");
            break;
        case 5:
            printf("The day is Thursday\n");
            break;
        case 6:
            printf("The day is Friday\n");
            break;
        case 7:
            printf("The day is Saturday\n");
            break;
        default:
            printf("Invalid day number input\n");
    }
    printf("Good bye!\n");
    return 0;
    }
