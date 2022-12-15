#include<stdio.h>
#include<math.h>

int main(){
    double height, weight, bmi;
    printf("Enter height in meter: ");
    scanf("%lf", &height);
    printf("Enter height in kg: ");
    scanf("%ld", &weight);
    // bmi = weight/ height^2
    bmi = weight / pow(height, 2);
    // lets classify the weight
    if(bmi >= 25){    // 25 and all value above 25 
        printf("Over Weight\n");
    } else if(bmi >= 16) {   // bmi equals to 16 and greater but less than 25
        printf("Normal Weight\n");
    } else{      // weight below 16
        printf("Under Weight\n");
    }
return 0;
}