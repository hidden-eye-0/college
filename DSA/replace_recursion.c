#include <stdio.h>
int replace(int x, int y) {
    if (x < 10)
        return y; 
    int n = 1;
    while (x / n >= 10)
        n *= 10;
    int result = y * n + (x % n);
    return result;
}
int main() {
    int num;
    printf("\n Enter a number: ");
    scanf("%d", &num);
    int new = replace(num, 9);
    printf("New number: %d\n", new);
}
