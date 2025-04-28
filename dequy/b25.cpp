#include<bits/stdc++.h>
using namespace std;

bool binarySearchDesc(int arr[], int left, int right, int x) {
    if (left > right) return false;
    
    int mid = (left + right) / 2;
    
    if (arr[mid] == x) return true;
    else if (arr[mid] < x) 
        return binarySearchDesc(arr, left, mid - 1, x); // mang giam dan
    else 
        return binarySearchDesc(arr, mid + 1, right, x);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    
    if (binarySearchDesc(arr, 0, n - 1, x)) 
        cout << "1";
    else 
        cout << "0";
}

