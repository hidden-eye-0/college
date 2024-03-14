#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next, *prev;
};

struct node * head;

int append(int n){
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

int insert(int n, int loc){
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if(head == NULL){
        head = temp;
        head->data = n;
        head->next = NULL;
        head->prev = NULL;
    } else {
        ptr = head;
        while(ptr->data != loc)
            ptr = ptr->next;
        temp->data = n;
        temp->next = ptr->next;
        temp->prev = ptr;
        ptr->next = temp;
        ptr->next->prev = temp;
    }
}

int insert_first(int n){
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

int delete_middle(int loc){
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
        printf("\n Stack Underflow!");
    else {
        temp = head;
        while(temp->data != loc)
            temp = temp->next;
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
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
    append(5);
    append(4);
    append(3);
    insert_first(0);
    append(2);
    insert(1, 3);
    pop();
    delete_first();
    display();
}