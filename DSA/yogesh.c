#include<stdio.h>
#include<stdlib.h>

#define max 5
int queue[max], rear=-1,front=-1;

int enqueue(int n){
    if(rear==max-1)
        printf("\n Queue is full");
    if(front == -1)
        front=0;
    queue[++rear] = n;
}

int dequeue(){
    printf("hello");
    if(rear<front || front==-1)
        printf("\n Queue is empty");
    front++;
}

int display(){
    if(front == -1 || front > rear)
        printf("\n Queue is empty");
    else{
        for(int i=rear; i >= front; i--)
            printf("\n [%d] => %d\n", i, queue[i]);
    }
    return 0;
}

int main(){
    enqueue(5);
    enqueue(4);
    enqueue(3);
    enqueue(2);
    enqueue(1);
    printf("\n before pop\n");
    display();
    dequeue();
    dequeue();
    printf("after pop\n");
    display();
}