#include<stdio.h>
int main(){
    int size;
    printf("\n Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size], max, x, y, sum[size][size];
    printf("\n Enterr array elements: ");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            sum[i][j] = arr[i]+arr[j];
        }
    }
    max = sum[0][0];
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(max<sum[i][j]){
                max = sum[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("\n The master pair is (%d, %d) with a sum of %d", x+1, y+1, max);

}