#include<bits/stdc++.h>
using namespace std;

int Knight(string s){
    int di2[] = {-2, 2}, di1[]= {-1, 1}, count = 0, x = s[0] - 96, y = s[1] - 48;

    for(int i = 0; i <= 1; i++){
        for(int j = 0 ; j <=1; j++){
            if((x + di1[i] <= 8 && x + di1[i] >= 1)&& (y + di2[j] <=8 && y + di2[j] >= 1)){
                count ++;
            }
            if((x + di2[i] <= 8 && x + di2[i] >= 1) && (y + di1[j] <=8 && y+di1[j] >=1 )){
                count ++;
            }
        }
    }
    return count;
}

int main(){
    string s; cin >> s;
    cout << Knight(s);
}