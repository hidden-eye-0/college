#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next, *prev;
};
struct node * head;

void append(int n){
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
    temp = (struct node *)malloc(sizeof(struct node));
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

int delete_first(){
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

void delete_middle(int loc){
    struct node *temp, *ptr;
    if(head == NULL)
        printf("\n Stack Underflow!");
    else {
        temp = head;
        while(temp != NULL && temp->data != loc)
            temp = temp->next;
        if(temp != NULL){
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            free(temp);
        }
    }
}


void rm_duplicate(){
    struct node *temp, *ptr, *temp1;
    if(head == NULL)
        printf("\n Empty");
    else{
        temp = head;
        while(temp != NULL){
            ptr = temp->next;
            while(ptr != NULL){
                if(temp->data == ptr->data){
                    if(ptr->next == NULL)
                        pop();
                    else if(temp == head)
                        delete_first();
                    else
                        delete_middle(temp->data);
                }
                ptr = ptr->next;
            }
            temp = temp->next;
        }
    }
}

void display(){
    struct node *temp, *ptr;
    temp = head;
    while(temp!=NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main(){
    append(1);
    append(2);
    append(3);
    append(2);
    append(4);
    append(1);
    rm_duplicate();
    display();
}