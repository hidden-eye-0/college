#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
    printf("Enter the elements of the first matrix:");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix1[i][j]);
    }
    printf("Enter the elements of the second matrix:");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
            scanf("%d", &matrix2[i][j]);
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
            result[i][j] = matrix1[i][j] + matrix2[i][j];
    }
    printf("Result:\n\t\t");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
            printf("%d ", result[i][j]);
        printf("\n\t\t");
    }
}
