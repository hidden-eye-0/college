#include<stdio.h>
int main(){
    int size, temp, temp1, j=0;
    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size], temp_arr[size], secret_arr[size];
    printf("\n Enter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<size; i++){
        temp = arr[i];
        if(i%2==0){
            while(temp/10!=0){
                temp/=10;
            }
            temp_arr[j++]=temp;
        }
        else{
            temp_arr[j++] = temp%10;
        }
    }
    
    int count1=0, count0=0;
    for(int i=0;i<size;i++){
        temp = temp_arr[i];
        if(temp==1){
            count1++;
        }
        if(temp==0){
            count0++;
        }
    }
    
    int tot = count0 + count1;
    for(int i=0;i<size;i++){
        for(int l=0;l<size;l++){
            if(temp_arr[i]>temp_arr[l]){
                temp1 = temp_arr[l];
                temp_arr[l] = temp_arr[i];
                temp_arr[i] = temp1;
            }
        }
    }
    
    for(int i=0;i<tot;i++){
        for(int l=0;l<tot;l++){
            if(temp_arr[i]<temp_arr[l]){
                temp = temp_arr[l];
                temp_arr[l] = temp_arr[i];
                temp_arr[i] = temp;
            }
        }
    }
    
    for(int i=0;i<size;i++)
        printf("\n %d", temp_arr[i]);
}
