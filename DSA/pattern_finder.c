#include<stdio.h>
#include<string.h>
int main(){
    char str[10], pattern[5];
    printf("\n Enter a string: ");
    scanf("%s",str);
    printf("\n Enter a pattern: ");
    scanf("%s",pattern);
    int found = 0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==pattern[0]){
            for(int j=0;j<strlen(pattern);j++){
                if(str[i+j]==pattern[j]){
                    found = 1;
                } else {
                    found = 0;
                }
            }
            if(found == 1){
                printf("\n  position: %d", i);
            }
        } else{
            continue;
        }
    }
}