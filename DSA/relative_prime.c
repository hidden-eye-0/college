#include <stdio.h>
int main() {
    int m, n;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);
    
    int num = 1;
    
    for (int i = 2; i <= m && i <= n; i++) {
        if (m % i == 0 && n % i == 0) {
            num = i;
            break;
        }
    }
    
    if (num == 1) {
        printf("%d and %d are relatively prime.\n", m, n);
    } else {
        printf("%d and %d are coprime.\n", m, n);
    }
    
    return 0;
}
