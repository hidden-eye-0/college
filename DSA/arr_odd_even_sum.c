#include <stdio.h>
int main(){
    int size;
    printf("\n Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size], odd_sum=0, even_sum=0;
    printf("\n Enter the array elements: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            even_sum = even_sum + arr[i];
        else
            odd_sum = odd_sum + arr[i];
    }
    printf("\n Odd sum: %d", odd_sum);
    printf("\n Even sum: %d\n", even_sum);
}