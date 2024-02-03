#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int array[SIZE];
int top1 = -1;  
int top2 = SIZE;  
void pushS1(int element, int n) {
    if (top1 + 1 == top2) {
        printf("Stack Overflow: S1\n");
    } else {
        array[++top1] = element;
        printf("Pushed %d to S1\n", element);
    }
}
void pushS2(int element, int n) {
    if (top1 + 1 == top2) {
        printf("Stack Overflow: S2\n");
    } else {
        array[--top2] = element;
        printf("Pushed %d to S2\n", element);
    }
}
int popS1() {
    if (top1 == -1) {
        printf("Stack Underflow: S1\n");
        return -1; 
    } else {
        int element = array[top1--];
        printf("Popped %d from S1\n", element);
        return element;
    }
}
int popS2() {
    if (top2 == SIZE) {
        printf("Stack Underflow: S2\n");
        return -1;  
    } else {
        int element = array[top2++];
        printf("Popped %d from S2\n", element);
        return element;
    }
}
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    while (1) {
        int choice, element;
        printf("\n1. Push to S1\n");
        printf("2. Push to S2\n");
        printf("3. Pop from S1\n");
        printf("4. Pop from S2\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter element to push to S1: ");
                scanf("%d", &element);
                pushS1(element, n);
                break;
            case 2:
                printf("Enter element to push to S2: ");
                scanf("%d", &element);
                pushS2(element, n);
                break;
            case 3:
                popS1();
                break;
            case 4:
                popS2();
                break;
            case 5:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
}
