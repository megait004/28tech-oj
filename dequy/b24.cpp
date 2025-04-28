#include<bits/stdc++.h>
using namespace std;

bool tangdan(int arr[], int n){
    if(n == 1) return true; 
    if(arr[n-2] >= arr[n-1]) return false; // arr[i-1] >= arr[i] => sai
    return tangdan(arr, n-1); 
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(tangdan(arr, n)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}

