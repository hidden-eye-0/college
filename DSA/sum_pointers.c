#include <stdio.h>
int main() {
    int size, sum=0;
    printf("Size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Array elements:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of elements: %d\n", sum);
}
