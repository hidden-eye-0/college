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

int common(){
    struct node *temp, *ptr;
    if(head == NULL)
        printf("\n Empty");
    temp = head;
    while(temp->next != NULL){
        ptr = temp->next;
        while(ptr->next != NULL){
            if(temp->data == ptr->data){
                printf("\n Common element: %d\n", ptr->data);
            }
            ptr = ptr->next;
        }
        temp = temp->next;
    }
}


int main(){
    append(1);
    append(2);
    append(3);
    append(2);
    append(4);
    common();
}