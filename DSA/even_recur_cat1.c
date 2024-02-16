#include<stdio.h>

int odd(int num){
    if(num == 0)
        return 0;
    int digit = num % 10;
    if(digit%2==0)
        return 1 + odd(num/10);
    else
        return odd(num/10);

}

int main(){
    printf("\n no of even is %d", odd(2342));
}