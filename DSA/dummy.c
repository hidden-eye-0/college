#include <stdio.h>
void isLuckyToken(int N) {
        if (N < 1 || N>100){
        printf("Invalid");
}
int sum = 0;
for (int i = 1; i < N; i++){
       if (N % i == 0) 
             sum += i;
}
if (sum == N) 
             printf("Lucky token");
else 
            printf("No");
}
int main() {
       int N;
       scanf("%d",&N);
       isLuckyToken(N);
       return 0;
}
