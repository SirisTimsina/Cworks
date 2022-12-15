// to collect 10 temperature readings and display max, min and average temperature
#include<stdio.h>

int main(){
    int tmp[10];
    int max, min, sum, avg;
    // input temperature readings

   printf("Enter 10 temperature reading: ");
    for(int i=0; i<10; i++){
        
        scanf("%d", &tmp[i]);
    }

    // calculate min, max, average
    sum = 0;
    min=max=tmp[0];  // suppose the first temperature reading is both min and max, 

    for(int i=1; i<10; i++){
        if(min > tmp[i]){
            min = tmp[i];
        }
        if( max < tmp[i]){
            max = tmp[i];
        }
        sum = sum + tmp[i];
    }
    avg = sum/10;
    printf("The maximum temperature is %d\n", max);
    printf("The minimum temperature is %d\n", min);
    printf("The average temperature is %d\n", avg);
    return 0;
}