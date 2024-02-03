#include<stdio.h>
#include<math.h>
int fact(int x){
    if(x>=1)
    {
        return x*fact(x-1);
    }
    else
    {
        return 1;
    }
}
int main(){
    int num;
    printf("\n Enter the number to find factorial: ");
    scanf("%d",&num);
    fact(num);
    printf("The factorial of the given number is  %d",fact(num));
}