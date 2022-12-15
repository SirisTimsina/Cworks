// Chain of if else statement allows us to create multiple branch
#include<stdio.h>
int main(){
    int temp;
    printf("Enter todays temperature: ");
    scanf("%d", &temp);

    if(temp>25){
        printf("Todays temperature is hot!");
    }else if(temp>15){   // 16 - 25
        printf("Todays temperature is normal!");
    }else if(temp > 0){
        printf("The temperature is cold!");
    }else{
        printf("The temperature is very cold!");
    }
    return 0;
}