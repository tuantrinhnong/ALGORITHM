#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); 

    string v = "", v1 = ""; 

    //convert to lowercase and remove unwanted characters
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (isupper(s[i])) {
                v += tolower(s[i]);
            } else {
                v += s[i];
            }
        } else if (isdigit(s[i]) || s[i] == ',' || s[i] == ' ') {
            v += s[i];
        }
    }

    //add spaces after commas and remove redundant spaces
    bool spaceNeeded = false;
    for (char c : v) {
        if (c == ' ') {
            if (!spaceNeeded) {
                v1 += ' ';
            }
            spaceNeeded = true;
        } else if (c == ',') {
            v1 += ", ";
            spaceNeeded = false;
        } else {
            if (spaceNeeded && !v1.empty()) {
                v1 += ' ';
            }
            v1 += c;
            spaceNeeded = false;
        }
    }
    
    //Capitalize first letter and ensure string ends with a question mark
    if (!v1.empty()) {
        v1[0] = toupper(v1[0]);
        if (v1.back() != '?') {
            v1 += '?';
        }
    }
    cout << v1;
    
    return 0;
}
