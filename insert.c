// a program to inset display update and delete
#include<stdio.h>
int main(){
    int array[10];
    int choice;
    int pos;

    printf("We have an array of 10 elements.\n");
    printf("Choose one of folowing operation:\n");
    printf("1. Insert element\n2. Display element\n3. Update element\n4. Delete Element\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:     // insert 
            printf("Enter element position: (0 - 9): ");    // 0 12
            scanf("%d", &pos);
            if(pos>=0 && pos<=9){
            
            for(int i=9; i>pos; i--){  
                // to make array element position vacant by shifting values to right after position..
                array[i] = array[i-1];
            }

            printf("Enter element value: ");
            scanf("%d", &array[pos]);
            }else{
                printf("Position out of range(0-9)\n");
            }
            break;
        case 2:    // display
            printf("Enter element position: (0 - 9) ");
            scanf("%d", &pos);
            if(pos>=0 && pos<=9){
                printf("Element %d = %d\n", pos, array[pos]);
            }else{
                printf("Position out of range(0-9)\n");
            }
            break;
        case 3:  // update same as insert except we donot have to shift values to right
             printf("Enter element position: (0 - 9): ");    // 0 12
            scanf("%d", &pos);
            if(pos>=0 && pos<=9){
            
            printf("Enter element value: ");
            scanf("%d", &array[pos]);
            }else{
                printf("Position out of range(0-9)\n");
            }
            break;

        case 4: // delete 
            printf("Enter element position: (0 - 9): ");    // 0 12
            scanf("%d", &pos);
            if(pos>=0 && pos<=9){
            
            for(int i=pos; i<=8; i++){  
                // to make array element position vacant by shifting values to right after position..
                array[i] = array[i+1];
            }
            array[9] = 0;  // make last element blank
            printf("Element deleted at %d\n", pos);

            }else{
                printf("Position out of range(0-9)\n");
            }
            break;
        default: 
            printf("Wrong option selected!");

    }

}