
// a program to display if the given number is prime or not
#include<stdio.h>

int prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;  // not a prime number
        }
    }
    return 1;
}

// int prime(){
//     int n;
//     printf("Enter a numbe:");
//     scanf("%d", &n); 
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return 0;  // not a prime number
//         }
//     }
//     return 1;
// }

int main(){
int num;
printf("Enter a number: ");
scanf("%d", &num);
if(prime(num)){
    printf("The number is prime\n");
}else{
    printf("The number is not prime\n");      
}

// int result = prime();

return 0;
}