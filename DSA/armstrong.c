#include<stdio.h>
#include<math.h>

int len(int num){
    int n=0;
    for(int i=0; num!=0; i++){
        n++;
        num/=10;
    }
    return n;

}
int main(){
    int num, temp, arm=0;
    printf("\n Enter a number: ");
    scanf("%d",&num);

    if((len(num))!=3)
        printf("\n Invalid Choice!");

    else{
        temp = num;
        for(int i=0; temp!=0; i++){
            arm += pow((temp%10), 3);
            temp /= 10;
        }

        if(arm==num)
            printf("\n Armstrong number!");
        else
            printf("\n Not an armstrong number!");
    }

}