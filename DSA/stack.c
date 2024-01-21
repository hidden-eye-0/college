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

show(){
    if(top == -1)
        printf("\n Stack underflow");
    else{
        for(int i=top;i>=0;i--)
            printf("\n [%d] => %d", i, input_array[i]);
    }
}

int main(){
    push();
    push();
    push();
    push();
    show();
    pop();
    pop();
    push();
    show();
}