#include <stdio.h>
#define MAX 5
struct Queue {
    int items[MAX];
    int front, rear;
};
void enqueue(struct Queue* q, int item) {
    if ((q->rear + 1) % MAX == q->front) {
        printf("Queue is full.\n");
    } else {
        if (q->front == -1)
            q->front = 0;
        q->rear = (q->rear + 1) % MAX;
        q->items[q->rear] = item;
        printf("%d enqueued to the queue.\n", item);
    }
}
int dequeue(struct Queue* q) {
    if (q->front == -1) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    } else {
        int item = q->items[q->front];
        if (q->front == q->rear) {
            q->front = -1;
            q->rear = -1;
        } else 
            q->front = (q->front + 1) % MAX;
        printf("%d dequeued from the queue.\n", item);
        return item;
    }
}

int main() {
    struct Queue q = {.front = -1, .rear = -1};
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    dequeue(&q);
    dequeue(&q);
}
