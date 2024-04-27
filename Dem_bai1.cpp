#include<bits/stdc++.h>
using namespace std;

int diffSubStringCounter(string s){
    int count = 0;
    string checked = " ";
    int len = s.length();
    string tmp = "";
    for(int i = 0; i < len; i++){
        string sub = "";
        for(int j = i; j < len ; j++){
            sub = sub + s[j];
            tmp = " " + sub + " ";
            if(checked.find(tmp) < 0 || checked.find(tmp) > checked.length() -1){
                count ++;
                checked = checked + sub + " ";
            }
        }
    }
    return count;
}

int main(){
    string s; cin >> s;
    cout << diffSubStringCounter(s);
}
