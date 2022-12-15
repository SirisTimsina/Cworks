/*
Do-while: exit controller looping statement
first the loog body is executed then only condition check is performed to check whether to
execute a loop again or not.
syntax:   do {
                // body of loop

          } while(condition_check);
*/
// input a temperature and display the average value of the temperature for multiple inputs
#include<stdio.h>
int main(){
    int num, avg, sum=0, count=0;
    do{
        // input a temperature reading
        printf("ENter a temperature: ");
        scanf("%d", &num);
        count++;
        sum = sum + num;
        // calculate the average temperature and display
        avg = sum/count;
        printf("%d. The average temperature is %d\n",count, avg);
        
    }while(avg<=50);
    return 0;
}