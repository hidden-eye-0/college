#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next, *prev;
};

struct node * head;

int enqueue(int n){
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if(head == NULL){
        head = temp;
        head->data = n;
        head->next = NULL;
        head->prev = NULL;
    } else {
        temp->data = n;
        temp->prev = NULL;
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

int dequeue(){
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
        printf("\n Stack Underflow!");
    else {
        temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        free(temp);
    }
}

int display(){
    struct node *temp, *ptr;
    temp = head;
    while(temp!=NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main(){
    enqueue(4);
    enqueue(3);
    enqueue(2);
    enqueue(1);
    dequeue();
    display();
}