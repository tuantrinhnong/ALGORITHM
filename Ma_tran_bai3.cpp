#include<bits/stdc++.h>
using namespace std;

void findPath(vector<vector<int>>& matrix, int m, int n){
    int curRow = 0;
    int curCol = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j< n; j++){
            if(matrix[i][j]==1){
                curRow = i;
                curCol = j;
                break;
            }
        }
    }
    int count = 1;
    bool satisfied = true;
    while(count < m*n){
        if(curRow+1 < m && matrix[curRow+1][curCol] == count + 1){
            curRow ++;
            count++;
            continue;
        }
        if(curRow-1 >= 0 && matrix[curRow-1][curCol] == count + 1){
            curRow --;
            count++;
            continue;
        }
        if(curCol+1 < n && matrix[curRow][curCol+1] == count + 1){
            curCol ++;
            count++;
            continue;
        }
        if(curCol-1 >= 0 && matrix[curRow][curCol-1] == count + 1){
            curCol --;
            count++;
            continue;
        }
        satisfied = false;
        break; 
    }
    if(satisfied){
        cout << "True";
    }
    else{
        cout << "False";
    }
}

int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j< n; j++){
            cin >> matrix[i][j];
        }
    }
    findPath(matrix, m, n); 
    return 0; 
}
