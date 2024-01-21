#include <stdio.h>
int main() {
    int list1[100], list2[100];
    int n, i, maxSoldProduct, maxSoldQuantity,quantity;
    float price;

    printf("Enter the number of products: ");
    scanf("%d", &n);
    printf("Enter the product id and price for each product:\n");
    for (i = 0; i < n; i++)
        scanf("%d %f", &list1[i], &price);

    printf("Enter the product id and quantity sold for each product:\n");
    for (i = 0; i < n; i++)
        scanf("%d %d", &list2[i], &quantity);

    maxSoldProduct = list2[0];
    maxSoldQuantity = list2[0];

    for (i = 1; i < n; i++) {
        if (list2[i] > maxSoldQuantity) {
            maxSoldProduct = list2[i];
            maxSoldQuantity = list2[i];
        }
    }
    printf("The most sold product is %d and its price is %.2f\n", maxSoldProduct, price);
}
