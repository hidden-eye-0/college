#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 50

int stack[MAX], top=-1;

void push(char num){
    if(top == MAX-1)
        printf("\n Stack overflow");
    else
        stack[++top] = num;
}

char pop(){
    if(top = -1)
        printf("\n Stack underflow");
    else
        top--;
}

int precedence(char symbol){
    switch(symbol){
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

void infix2postfix(char *infix, char *postfix){
    int i, j;
    char ch, popped;
    push('(');
    strcat(infix, ')');
    i=0;
    j=0;
    ch = infix[i++];
    while(ch!='\0'){
        if(isalnum(ch))
            postfix[j++] = ch;
        else if(ch == '(')
            push('(');
        else if(ch ==')'){
            while((popped = pop()) != '(')
                postfix[j++] = popped;
        }
        else{
            while(precedence(stack[top]) >=  precedence(ch))
                postfix[j++] = pop();
            push(ch);
        }
        ch = infix[i++];
    }
    postfix[j] = '\0';
}

int main(){
    char postfix[MAX], infix[MAX];
    printf("\n Enter the expression: ");
    scanf("%s", infix);
    infix2postfix(infix, postfix);
    printf("\n postfix: %s", postfix);
}