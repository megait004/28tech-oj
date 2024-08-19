#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 1; i < n; i++) { // duyet tu 1  tránh kiểm tra phàn tử đầu tiên vì không có phần tử đứng trước 
        if(arr[i] > arr[i - 1]) {
            cout << arr[i] << " ";
        }
    }
    
    return 0;
}
