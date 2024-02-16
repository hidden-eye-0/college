#include<stdio.h>

#define MAX 50

int stack[MAX], top = -1;

int push(int num){
    if( top == MAX-1)
        printf("\n Stack overflow!");
    else
        stack[++top] = num;
}

int pop(){
    if(top == -1)
        printf("\n Stack underflow!");
    else
        top--;
}

int display(){
    if(top == -1)
        printf("\n Stack underflow!");
    else{
        for(int i = top; i>-1; i--)
            printf("\n [%d] => %d", i, stack[i]);
    }
}

int main(){
    int choice, num;
    do{
        printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("\n Enter the number to be pushed: ");
                scanf("%d", &num);
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            case 5:
                printf("\n Invalid Choice!");
        }
    }while(choice!=4);
}