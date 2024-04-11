#include<bits/stdc++.h>
using namespace std;

bool arr[10001];

void ktao(int n){
    for(int i = 2; i < n; i++){
        arr[i]=1;
    }
}

void sieve(int n){
    for(int i = 2; i*i <= n; i++){
        if(arr[i]){
            for(int j = i*i; j <= n; j += i){
                arr[j] = 0;
            }
        }
    }
}

int gcpd(int a, int b){
    sieve(min(a, b));
    for(int i = min(a,b); i>=2; i--){
        if(arr[i] == 1 && a % i== 0 && b % i == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    int a, b;
    cin >> a >> b;
    ktao(min(a, b));
    cout << gcpd(a, b);
}