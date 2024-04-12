#include<bits/stdc++.h>
using namespace std;

int lastDigitDiffZero(int n){
    int res = 1;
    for(int i = 2; i <= n; i++){
        res*=i;
        while(res %10 == 0){
            res /= 10;
        }
        res = res % 100;
    }
    while(res % 10 == 0){
        res /= 10;
    }
    return res%10;
}

/* int numOfZero(int n){
    int count = 0;
    for(int i = 1; i<=n; i++){
        if(i%5==0){
            count ++;
        }
    }
    return count;
} */

int main(){
    int n; cin>> n;
    cout << lastDigitDiffZero(n);
    return 0;
}