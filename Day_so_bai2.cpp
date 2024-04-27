#include<bits/stdc++.h>
using namespace std;

void Kadane(vector<int> input){
    int len = input.size();
    int max_sum = 0;
    int cur_sum = 0;
    int start_index = 0;
    int end_index = 0;
    for(int i = 0; i < len; i++){
        if(cur_sum < 0){
            cur_sum = input[i];
            start_index = i;
        }
        else{
            cur_sum += input[i];
        }

        if(cur_sum > max_sum){
            max_sum = cur_sum;
            end_index = i;
        }
    }
    cout << start_index << " " << end_index << " " << max_sum;
}

int main(){
    int n; cin>>n;
    vector<int> input;
    int tmp;
    while(n--){
        cin >> tmp; input.push_back(tmp);
    }
    Kadane(input);
}