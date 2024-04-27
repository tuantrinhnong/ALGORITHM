#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[1000], int l, int r, int x){
    if(r >= l){
        int mid = l + (r - l) / 2;

        if(arr[mid] == x){
            return true;
        }

        if(arr[mid] > x){
            return binarySearch(arr, l, mid - 1, x);
        }
        else{
            return binarySearch(arr, mid + 1, r, x);
        }
    }
    return false;
}

int main(){
    int size; cin>> size;
    int arr[1000];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int x; cin>> x;
    if(binarySearch(arr, 0, size-1, x)){
        cout << "true";
    }
    else{
        cout << "false";
    }
}
