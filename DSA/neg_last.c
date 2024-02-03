#include <stdio.h>

#define MAX 50
int top = -1, stack[MAX];

void push(int num) {
    if (top == MAX - 1) {
        printf("\n Stack overflow!");
    } else {
        top++;
        stack[top] = num;
    }
}

void pop() {
    if (top == -1) {
        printf("\n Stack underflow!");
    } else {
        top--;
    }
}

void display(int size){
    if(top == -1) 
        printf("\n Stack underflow!");
    else
        for(int i=size-1;i>=0;i--)
            printf("\n [%d] => %d",i,stack[i]);
}

int main() {
    int size;
    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size], neg_size = 0;
    printf("\n Enter the array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            push(arr[i]);
        } else {
            neg_size++;
        }
    }
    int neg_arr[neg_size];
    for (int i = 0, j = 0; i < size; i++) {
        if (arr[i] <= 0) {
            neg_arr[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < neg_size; i++) {
        push(neg_arr[i]);
    }
    display(size);
}
