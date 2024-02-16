#include<stdio.h>

#define MAX 50

int queue[MAX];
int front = -1, rear = -1;

int enqueue(int num){
    if(rear == MAX-1)
        printf("\n Queue is full");
    if(front == -1)
        front = 0;
    queue[++rear] = num;
    return 0;
}

int dequeue(){
    if(front == -1 || front > rear)
        printf("\n Queue is empty");
    int num = queue[front];
    front++;
    return num;
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
    int num, choice;
    do{
        printf("\n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit");
        printf("\n Enter ur choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("\n Enter the number to add it in the queue: ");
                scanf("%d", &num);
                enqueue(num);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                printf("\n Invalid choice! ");
        }
    }while(choice!=4);
}