#include<bits/stdc++.h>
using namespace std;

int find(vector<int> input, int i, int j){
    int D = input[j] - input[i];
    int count = 2;
    for(int t = j+1; t < input.size(); t ++){
        if(input[t] - input[i] == count * D){
            count++;
        }
    }
    return count;
}

int longestSequence(vector<int> input){
    int max = 0;
    int n = input.size();
    for(int i = 0; i < n; i++){

        for(int j = i+1; j<n; j++){
            if(max < find(input, i, j)){
                max = find(input, i, j);
            }
        }
    }
    return max;
}

int main(){
    int size; cin>> size;
    vector<int> input;
    while(size--){
        int tmp; cin>> tmp;
        input.push_back(tmp);
    }
    cout << longestSequence(input);
}