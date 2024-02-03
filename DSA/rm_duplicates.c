#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
int top = -1;
char stack[SIZE];
void push(char element) {
    if (top!=SIZE-1) {
        stack[++top] = element;
    } else {
        printf("Stack overflow!\n");
    }
}
char pop() {
    if (top!=-1) {
        return stack[top--];
    } else {
        printf("Stack underflow!\n");
    }
}
void rm_duplicates(char str[]) {
    int i = 0, n = strlen(str);
    while (i < n) {
        if (top==-1 || str[i] != stack[top]) {
            push(str[i]);
            i++;
        } else {
            while (i < n && str[i] == stack[top])
                i++;
            pop();
        }
    }
    stack[top + 1] = '\0';
    strcpy(str, stack);
}
int main() {
    char inputString[SIZE];
    printf("Enter a string: ");
    scanf("%s", inputString);
    rm_duplicates(inputString);
    printf("String after removing adjacent duplicates: %s\n", inputString);
}