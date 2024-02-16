#include<stdio.h>
int main(){
    int arr[5];
    printf("\n Enter the array elements: ");
    for(int i=0;i<5;i++)
        scanf("%d", &arr[i]);
    int temp = arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>temp)
            temp = arr[i];
    }
    printf("\n The max element is %d", temp);
}