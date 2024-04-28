#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i+=2){
        cout<< i << " ";
    }
    for(int j = 2; j<= n; j+=2){
        cout << j << " ";
    }
}