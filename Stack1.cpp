#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        string s;
        getline(cin, s);
        if (s == "."){
            break;
        }

        stack<char> myStack;
        int len = s.length();
        for(int i = 0; i < len; i++){
            if(s[i] == ')'){
                if(myStack.top()== '(' ){
                    myStack.pop();
                }
                else{
                    myStack.push(s[i]);
                }
            }
            else if(s[i] == ']'){
                if(myStack.top()== '[' ){
                    myStack.pop();
                }
                else{
                    myStack.push(s[i]);
                }
            }
            else if(s[i] == '(' || s[i] == '['){
                myStack.push(s[i]);
            }
        }
        if(myStack.empty()){
            cout<< "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    

}