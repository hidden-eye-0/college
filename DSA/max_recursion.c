#include <stdio.h>
int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];
    else {
        int max = findMax(arr, n - 1);
        return (arr[n - 1] > max) ? arr[n - 1] : max;
    }
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max = findMax(arr, n);
    printf("The maximum element in the array is: %d\n", max);
}
