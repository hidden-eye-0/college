#include<stdio.h>
#include<string.h>

#define max 5

int top = -1;
int stack[max];

push(int a){
    if(top == max-1)
        printf("\n Stack Overflow!");
    else
        stack[++top] = a;
}
pop(){
    if(top<0)
        printf("\n Stack Underflow!");
    else
        top--;
}

int main(){
    char arr[50];
    printf("\n Enter the expression: ");
    scanf("%s", arr);
    
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]=='{' || arr[i]=='[' || arr[i]=='(')
            push(arr[i]);
        else if(arr[i]=='}' || arr[i]==']' || arr[i]==')'){
            if(arr[i]=='}' && stack[--top]=='{')
                pop();
            else if(arr[i]==']' && stack[--top]=='[')
                pop();
            else if(arr[i]==')' && stack[--top]==')')
                pop();
        }
    }
    if(top<0)
        printf("Balanced!");
    else
        printf("\n Not balanced!");
}