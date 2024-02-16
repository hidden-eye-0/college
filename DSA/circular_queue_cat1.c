#include<stdio.h>
int main(){
    int arr[] = {2, 1, 8, 7, 1};
    for(int i=0;i<5;i++){
        if(arr[i]<arr[i+1] && arr[i]>arr[i-1])
            printf("super");
    }
}