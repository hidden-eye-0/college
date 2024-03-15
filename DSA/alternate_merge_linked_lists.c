#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head1;
struct node *head2;
struct node *head3;

void append_arr1(int n){
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if(head1 == NULL){
        head1 = temp;
        temp->data = n;
        temp->next = NULL;
    } else {
        ptr = head1;
        while(ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
        temp->data = n;
        temp->next = NULL;
    }
}

void append_arr2(int n){
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if(head2 == NULL){
        head2 = temp;
        temp->data = n;
        temp->next = NULL;
    } else {
        ptr = head2;
        while(ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
        temp->data = n;
        temp->next = NULL;
    }
}

void append_arr3(int n){
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if(head3 == NULL){
        head3 = temp;
        temp->data = n;
        temp->next = NULL;
    } else {
        ptr = head3;
        while(ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
        temp->data = n;
        temp->next = NULL;
    }
}

void alternate_merge(){
    struct node *temp, *ptr, *temp1;
    temp = (struct node *)malloc(sizeof(struct node));
    temp = head1;
    temp1 = head2;
    for(temp;temp->next != NULL;temp=temp->next){
        append_arr3(temp->data);
        append_arr3(temp1->data);
        temp1 = temp1->next;
    }
}

void display(){
    struct node *temp, *ptr;
    temp = head3;
    while(temp->next != NULL){
        printf("\n %d", temp->data);
        temp = temp->next;
    }
    printf("\n %d", temp->data);
}

int main(){
    append_arr1(1);
    append_arr1(2);
    append_arr1(3);
    append_arr1(4);
    append_arr1(5);
    append_arr2(0);
    append_arr2(0);
    append_arr2(0);
    append_arr2(0);
    append_arr2(0);
    alternate_merge();
    display();
}