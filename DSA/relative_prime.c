#include<stdio.h>
int main(){
    int start, end, prime, n=0, gap;
    printf("\n Enter the range: ");
    scanf("%d %d",&start, &end);
    int prime_store[end];
    for(int i=start;i<end;i++){
        if(i%2==0 || i==1)
            prime = 0;
        else{
            for(int j=3;j<i;j++){
                if(i%j==0){
                    prime = 0;
                    break;
                }
                else 
                    prime = 1;
            }
            if(prime){
                prime_store[n] = i;
                n++;
            }
        }
    }
}