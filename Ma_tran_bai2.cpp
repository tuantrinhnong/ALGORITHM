#include<bits/stdc++.h>
using namespace std;

void spiralNumbers(int n){
    int matrix[n][n];
    int cell = 1;
    int a = 0;
    int b = n - 1;
    while(cell <= n*n){
        for(int i = a; i <= b; i++){
            matrix[a][i] = cell;
            cell++;
        }
        for(int j = a + 1; j <= b; j++){
            matrix[j][b] = cell;
            cell++;
        }
        for(int k = b - 1; k >= a; k--){
            matrix[b][k] = cell;
            cell++;
        }
        for(int t = b - 1; t > a; t--){
            matrix[t][a] = cell;
            cell++;
        }
        a++;
        b--;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<< matrix[i][j] << "  ";
        }
        cout << endl;
    }
}

int main(){
    int n; cin >> n;
    spiralNumbers(n);
}
