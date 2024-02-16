
#define MAX 50

int stack[MAX], top = -1;

int push(int num){
    if(top == MAX-1)
        return(1);
    else
        return stack[++top]=num;
}