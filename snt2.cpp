#include<bits/stdc++.h>
using namespace std;

bool a[100000001];
void sieve(int n){
    for(int i = 2; i <= n; i++){
        a[i] = true;
    }
    a[0] = false; a[1] = false;
    for(int i = 2; i <=n; i++){
        if(a[i]){
            for(int j = i*i; j <= n; j += i){
                a[j] = false;
            }
        }
    }
}

long long primeSum(int n){
    int mod = 22082018;
    sieve(n);
    int ans = 0;
    for(int i = 2; i <= n; i++){
        if(a[i]){
            ans = (ans + i % mod) % mod;
        }
    }
    return ans;
}

int main(void){
    int n; cin>> n;
    cout << primeSum(n);
}