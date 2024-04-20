#include<stdio.h>
#include<stdlib.h>

int display_result(int arr[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}

int check(int arr[9][9], int row, int col, int n){
    int count=0;
    for(int i=0;i<9;i++){
        if(arr[row][i]==n)
            count++;
    }

    for(int i=0;i<9;i++){
        if(arr[i][col]==n)
            count++;
    }

    int box_row = row - row%3;
    int box_col = col - col%3;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i+box_row][j+box_col]==n)
                count++;
        }
    }
    return count;
}

int sudoku(int arr[9][9], int row, int col){
    if(row==8 && col==9)
        return 1;

    if(col==9){
        row++;
        col=0;
    }

    if(arr[row][col]>0)
        return sudoku(arr, row, col+1);

    for(int ans=1;ans<10;ans++){
        if(check(arr, row, col, ans)==0){
            arr[row][col]=ans;

            if(sudoku(arr, row, col+1)==1)
                return 1;
        } 
        arr[row][col]=0;
    }
    return 0;
}

int main(){
    // 0 means unassigned cells
    int arr[9][9] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                    { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                    { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                    { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                    { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                    { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                    { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                    { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                    { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };

    if (sudoku(arr, 0, 0) == 1)
        display_result(arr);
    else
        printf("Can't be solved! Please give an correct problem\n");

    return 0;
}
