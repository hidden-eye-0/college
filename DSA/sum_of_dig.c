#include<stdio.h>
int main(){
    int sum = 0, num;
    printf("\n Enter a 5 digit number: ");
    scanf("%d",&num);

    for(int i=0; num!=0; i++){
        sum += num%10;
        num /= 10;
    }

    printf("\n Sum of the digits is %d", sum);
}