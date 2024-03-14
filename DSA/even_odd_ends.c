#include <stdio.h>
#define MAX_SIZE 100
int D_QUE[MAX_SIZE], front_even=-1, rear_even=-1, front_odd = MAX_SIZE, rear_odd=MAX_SIZE;
void insertEven(int item) {
    if (rear_even == front_odd - 1) {
        printf("D_QUE is full\n");
        return;
    }
    D_QUE[++rear_even] = item;
}
void insertOdd(int item) {
    if (rear_odd == front_even + 1) {
        printf("D_QUE is full\n");
        return;
    }
    D_QUE[--rear_odd] = item;
}
void printD_QUE() {
    printf("D_QUE elements: ");
    for (int i = front_even + 1; i <= rear_even; i++) 
        printf("%d ", D_QUE[i]);
    for (int i = front_odd - 1; i >= rear_odd; i--) 
        printf("%d ", D_QUE[i]);
    printf("\n");
}

int main() {
    int elements[] = {2, 7, 4, 1, 6, 3, 8, 5};
    int n = sizeof(elements) / sizeof(elements[0]);
    for (int i = 0; i < n; i++) {
        if (elements[i] % 2 == 0) 
            insertEven(elements[i]);
        else 
            insertOdd(elements[i]);
    }
    printD_QUE();
}
