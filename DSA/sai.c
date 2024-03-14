#include<stdio.h>
int name1(int *name){
    printf("%d", *name);
}
int main(){
    int name = 123;
    name1(&name);
}