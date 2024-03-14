#include <stdio.h>
#define MAX_SIZE 100
int queue[MAX_SIZE];
int front = 0, rear=-1;
void enqueue(int item) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full\n");
        return;
    }
    queue[++rear] = item;
}

int dequeue() {
    if (front > rear) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue[front++];
}

void great_p(int p) {
    int found_greater = 0;
    while (front <= rear) {
        int front_element = dequeue();
        if (front_element > p) {
            found_greater = 1;
            printf("%d, ", front_element);
        }
    }
    if (!found_greater) 
        printf("no\n");
}

int main() {
    int elements[] = {10, 2, 13, 44, 15};
    int n = sizeof(elements) / sizeof(elements[0]);
    for (int i = 0; i < n; i++) 
        enqueue(elements[i]);
    int p = 14;
    great_p(p);
}
