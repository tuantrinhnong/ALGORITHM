#include<bits/stdc++.h>
using namespace std;

vector<int> product(int n){
    vector<int> ans; 
    for(int i = 9; i>=2; i--){
        while(n%i==0){
            n/=i;
            ans.push_back(i);
        }
    }
    reverse(ans.begin(), ans.end());
    if(ans.empty()){
        ans.push_back(-1);
    }
    return ans;
}

int main(){
    int n; cin >> n;
    vector<int> ans = product(n);
    for(auto x : ans){
        cout << x;
    }
    return 0;
}