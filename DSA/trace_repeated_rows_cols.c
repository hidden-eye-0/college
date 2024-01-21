#include <stdio.h>

int main() {
    int rows, row=0, column=0;
    printf("Enter the number of rows for the square matrix: ");
    scanf("%d", &rows);

    int matrix[rows][rows], temp1=0;
    printf("Enter the elements of the matrix: ");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++)
            scanf("%d", &matrix[i][j]);
    }

    int trace = 0;
    for (int i = 0; i < rows; i++) 
        trace += matrix[i][i];

    for(int i=0; i < rows; i++) {
        for(int j=0; j < rows; j++){
            for(int k=j+1; k < rows; k++){
                if(matrix[i][j] == matrix[i][k])
                    temp1 = 1;
            }
        }
        if(temp1)
            row++;
    }

    for(int j = 0; j < rows; j++){
        for(int i = 0; i < rows; i++){
            for(int k = i+1; k < rows; k++){
                if(matrix[i][j] == matrix[k][j])
                    temp1 = 1;
            }
        }
        if(temp1)
            column++;
    }

    printf("\n Trace: %d", trace);
    printf("\n No of repeated columns: %d", column);
    printf("\n No of repeated rows: %d", row);
}
