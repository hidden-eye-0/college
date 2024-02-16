#include<stdio.h>
#include<string.h>

int main(){
    char buf[10] ;
    printf("\n Enter a string: ");
    scanf("%s", buf);
    int temp[strlen(buf)];
    int j = 0;
    for(int i=strlen(buf)-1; i>=0; i--){
        temp[j] = buf[i];
        j++;
    }
    for(int i=0;i<strlen(buf);i++)
        printf("%c", temp[i]);
}