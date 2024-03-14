#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head;

void append(int n){
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if(head == NULL){
        head = temp;
        temp->data = n;
        temp->next = NULL;
    } else {
        ptr = head;
        while(ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
        temp->data = n;
        temp->next = NULL;
    }
}

void insert(int n, int loc){
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if(head == NULL){
        head = temp;
        head->data = n;
        head->next = NULL;
    } else {
        ptr = head;
        while(ptr->data != loc){
            ptr = ptr->next;
        }
        temp->data = n;
        temp->next = ptr->next;
        ptr->next = temp;
    }
}

void insert_first(int n){
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if(head == NULL){
        head = temp;
        head->data = n;
        head->next = NULL;
    } else {
        temp->data = n;
        temp->next = head;
        head = temp;
    }
}

void pop(){
    struct node *temp, *ptr;
    if(head == NULL)
        printf("\n Stack Underflow!");
    else{
        temp = head;
        while(temp->next != NULL){
            ptr = temp;
            temp = temp->next;
        }
        ptr->next = NULL;
        free(temp);
    }
}

void delete_first(){
    struct node *temp, *ptr;
    if(head == NULL)
        printf("\n Stack Underflow!");
    else{
        temp = head;
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
        while(temp->data != loc){
            ptr = temp;
            temp = temp->next;
        }
        ptr->next = temp->next;
        free(temp);
    }
}

void display(){
    struct node *temp, *ptr;
    temp = head;
    while(temp->next != NULL){
        printf("\n %d", temp->data);
        temp = temp->next;
    }
    printf("\n %d", temp->data);
}

int main(){
    append(5);
    append(4);
    append(3);
    insert(2, 4);
    insert_first(1);
    delete_first();
    pop();
    delete_middle(4);
    display();
}