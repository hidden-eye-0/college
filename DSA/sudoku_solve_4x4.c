// 4x4 Sudoku Solver using Backtracking
#include<stdio.h>
#include<stdlib.h>

//To display the final result
void display(int arr[4][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            printf("%d", arr[i][j]);
        printf("\n");
    }
}

//To check whether we can insert the specified value into the cell
int can_insert(int arr[4][4], int row, int col, int value){
    int count = 0;

    //To check if there is any number with same value is already inserted in the "row"
    for(int i=0;i<4;i++){
        if(arr[row][i] == value)
            count++;
    }

    //To check if there is any number with same value is already inserted in the "column"
    for(int i=0;i<4;i++){
        if(arr[i][col] == value)
            count++;
    }

    //To check if there is any number with same value is alredy inserted in the sub 2x2 box
    int box_start_row = row - (row % 2);
    int box_start_col = col - (col % 2);

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i + box_start_row][j + box_start_col] == value)
                count++;
        }
    }

    return count;
}

//For Solving the problem
int solve(int arr[4][4], int row, int col){
    //To stop the backtracking if it reaches the last row
    if(row == 3 && col == 4)
        return 1;

    //To move to the next row if it reaches the last column
    if(col==4){
        row++;
        col=0;
    }

    //To increment the column if a values is already present in the cell
    if(arr[row][col]>0)
        return solve(arr, row, col+1);
    
    //To check and insert the values into the cell
    for(int i=1;i<=4;i++){
        if(can_insert(arr, row, col, i)==0){
            arr[row][col] = i;
            if(solve(arr, row, col+1)==1)
                return 1;
        }
        //This will change the cell value to zero if the inserted value first passed the can_insert function and then failed the function
        arr[row][col] = 0;
    }   
    return 0;
}

int main(){
    int arr[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    if(solve(arr, 0, 0))
        display(arr);
    else
        printf("\n It can't be solved! Please enter a valid problem");
}