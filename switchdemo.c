
// Switch case demo program
#include<stdio.h>

int main(){
    int a,b,result;
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);
    char op;
    printf("What operation to perform: (+, -, * , /, %% ) ");
    scanf("%c", &op);
     scanf("%c", &op);

    switch(op){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:
            printf("Envalid operation selected!\n");
            break;
    }
printf("The result of %c is %d\n", op, result);
return 0;
}