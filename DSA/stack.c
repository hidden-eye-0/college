#include<stdio.h>
#define MAX 5
int top = -1, input_array[MAX];
push(){
    if(top == MAX-1)
        printf("\n Stack overflow");
    else{
        top++;
        printf("\n Enter the element to be pushed: ");
        scanf("%d", &input_array[top]);
    }
}
pop(){
    if(top == -1)
        printf("\n Stack underflow");
    else{
        printf("\n The element %d is popped from the stack", input_array[top]);
        top--;
    }
}
peek(){
    if(top == -1)
        printf("\n Stack underflow");
    else
        printf("\n Peeked element -> %d", input_array[top]);
}
show(){
    if(top == -1)
        printf("\n Stack underflow");
    else{
        for(int i=top;i>=0;i--)
            printf("\n [%d] => %d", i, input_array[i]);
    }
}
int main(){
    int choice;
    do{
        printf("\n\t1.Push\n\t2.Pop\n\t3.Peek\n\t4.Display\n\t5.Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3: 
                peek();
                break;
            case 4:
                show();
                break;
            case 5: 
                break;
            default:
                printf("\n Invalid Choice!");
        }
    }while(choice!=5);
}