#include <stdio.h>
int searchElement(int arr[], int n, int x)
{
    if (n == 0)
        return 0;
    if (arr[n - 1] == x)
        return 1;
    return searchElement(arr, n - 1, x);
}
int main()
{
    int n, x;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element to search: ");
    scanf("%d", &x);  
    if (searchElement(arr, n, x))
        printf("Present\n");
    else
        printf("Not Present\n");
}