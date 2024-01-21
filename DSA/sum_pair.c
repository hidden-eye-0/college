#include<stdio.h>
int main(){
    int size, no=0;
    printf("\n Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size], sum;
    printf("\n Enterr array elements: ");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    printf("\n Enter the sum to find the pairs... : ");
    scanf("%d",&sum);
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i]+arr[j]==sum){
                printf("\n The pairs (%d, %d) has the sum %d\n", arr[i], arr[j], sum);
                no = 1;
            }
        }
    }
    if(!no)
        printf("\n 0\n");
}