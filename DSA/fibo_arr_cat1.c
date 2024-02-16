#include<stdio.h>
int main(){
    int fibo[10];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2;i<10;i++)
        fibo[i] = fibo[i-2] + fibo[i-1];
    
    for(int i=0;i<10;i++)
        printf("\n %d\n", fibo[i]);
}