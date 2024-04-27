#include<bits/stdc++.h>
using namespace std;

int diffSquaresCounter(int matrix[100][100], int row, int column){
    string checked = " ";
    int count = 0;

    for(int i = 0; i < row - 1; i++ ){
        string square = "";
        for(int j = 0; j < column -1; j++){
            square = to_string(matrix[i][j]) +
                to_string(matrix[i][j+1]) +
                to_string(matrix[i+1][j]) +
                to_string(matrix[i+1][j+1]);
            string tmp = " " + square + " ";
            if(checked.find(tmp) < 0 || checked.find(tmp) > checked.length() - 1){
                count++;
                checked = checked + square + " ";
            }

        }
    }
    return count;
}

int main(){
    int row, column;
    cin >> row >> column;
    int matrix[100][100];
    for(int i = 0; i < row; i++)
        for(int j = 0; j < column; j++)
            cin >> matrix[i][j];
    cout << diffSquaresCounter(matrix, row, column);
}
