// a program to display weight condition 
#include<stdio.h>
#include<math.h>

int main(){
    float weight, height, bmi;
    printf("---------------Welcome to a bmi claculator---------------\n");
    printf("\n");  // creates a blank line
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    bmi = weight/pow(height, 2);   // power function from math.h library 
    // lets categorize bmi into different weight group
    if(bmi < 18.5){
        printf("You are under-weight\n");
    }
    else if(bmi < 25){
        printf("You are normal-weight\n");
    }
    else{
        printf("You are over-weight\n");
    }

    printf("Your bmi index value is %.2f\n", bmi);
    printf("---------------Thank you!--------------");
return 0;
}