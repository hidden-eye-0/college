#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_SIZE 100
char stack[MAX_SIZE];
int top = -1;
void push(char item) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
}
char pop() {
    if (top == -1)
        printf("Stack Underflow\n");
    return stack[top--];
}
int precedence(char symbol) {
    switch (symbol) {
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}
void infixToPostfix(char *infix, char *postfix) {
    int i, j;
    char ch, popped;
    push('(');
    strcat(infix, ")");
    i = 0;
    j = 0;
    ch = infix[i++];
    while (ch != '\0') {
        if (isalnum(ch)) {
            postfix[j++] = ch;
        } else if (ch == '(') {
            push(ch);
        } else if (ch == ')') {
            while ((popped = pop()) != '(') {
                postfix[j++] = popped;
            }
        } else {
            while (precedence(stack[top]) >= precedence(ch)) {
                postfix[j++] = pop();
            }
            push(ch);
        }
        ch = infix[i++];
    }

    postfix[j] = '\0';
}

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
}