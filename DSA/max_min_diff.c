#include<stdio.h>
int main(){
    int size;
    printf("\n Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size], max, min;
    printf("\n Enterr array elements: ");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    max = arr[0];
    min = arr[0];
    for(int i=0; i<size; i++){
        if(max<arr[i])
            max = arr[i];
        if(min>arr[i])
            min = arr[i];
    }
    printf("\n The difference between maximum and the minimum is %d\n", max-min);
}