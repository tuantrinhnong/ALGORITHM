#include<bits/stdc++.h>
using namespace std;

void findDuplicate(string &s){
    vector<char> checked;
    int checker = 0;

    for(char c : s){
        int charValue = c - 'a';
        int charBit = 1 << charValue;

        if((checker & charBit) > 0 && find(checked.begin(), checked.end(), c)== checked.end()){
            cout << c << " ";
            checked.push_back(c);
        }
        else{
            checker |= charBit;
        }
    }
}

int main(){
    string s;
    cin >> s;
    findDuplicate(s);
}