#include<bits/stdc++.h>
using namespace std;

int digitSum(int n){
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n/= 10;
    }
    return sum;
}

bool cmp(int a, int b){
    if(digitSum(a) == digitSum(b)){
        return a < b;
    }
    else{
        return digitSum(a) < digitSum(b);
    }
}

int main(){
    int n; cin >> n;
    vector<int> input;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        input.push_back(tmp);
    }
    sort(input.begin(), input.end(),  cmp);
    for(auto x : input){
        cout << x << " ";
    }
}