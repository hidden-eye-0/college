// Online C compiler to run C program online
#include <stdio.h>
#define max 5
int top1 = -1, stack2[max], stack1[max], top2 = -1;
int push_s1(){
    int n;
    if(top1==max-1)
        printf("\n Stack1 overflow!");
    else{
        printf("\n Enter the element to be pushed in stack1: ");
        scanf("%d", &n);
        stack1[++top1] = n;
    }
}

int push_s2(){
    int n;
    if(top2==max-1){
        printf("\n Stack2 overflow!");
    }
    else{
        printf("\n Enter the element to be pushed in stack2: ");
        scanf("%d", &n);
        stack2[++top2] = n;
    }
}

void is_unique(){
    int uniq=1;
    for(int i=0;i<max;i++){
        for(int j=0;j<max;j++){
            if(stack1[i] == stack2[j])
                uniq=0;
        }
    }
    if(uniq)
        printf("\n Stack is unique");
    else
        printf("\n Stack is not unique");
}

int main(){
    push_s1();
    push_s1();
    push_s1();
    push_s1();
    push_s1();
    push_s2();
    push_s2();
    push_s2();
    push_s2();
    push_s2();
    is_unique();
}
