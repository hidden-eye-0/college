#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next, *prev;
};

struct node * head;

int push(int n){
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if(head == NULL){
        head = temp;
        head->data = n;
        head->next = NULL;
        head->prev = NULL;
    } else {
        ptr = head;
        while(ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
        temp->data = n;
        temp->prev = ptr;
        temp->next = NULL;
    }
}

int pop(){
    struct node *temp, *ptr;
    if(head == NULL)
        printf("\n Stack Underflow!");
    else {
        temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->prev->next = NULL;
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
    push(5);
    push(4);
    push(3);
    push(2);
    pop();
    display();
}