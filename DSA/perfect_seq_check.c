#include<stdio.h>
int main(){
    int size;
    printf("\n Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size], seq = 0;
    printf("\n Enterr array elements: ");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i<size; i++){
        if(arr[i]%2==0 && i%2==0)
            seq = 1;
        else
            seq = 0;
    }
    if(seq)
        printf("\n The given array is in perfect sequence");
    else
        printf("\n The given array is not in perfect sequence");
}