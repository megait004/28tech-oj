#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    
    // Nhập mảng
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Sắp xếp mảng
    sort(arr, arr + n);
    
    // Hai con trỏ
    int l = 0;            // Con trỏ trái
    int r = n - 1;        // Con trỏ phải
    
    // Kiểm tra tổng của hai phần tử
    while(l < r) {
        int sum = arr[l] + arr[r];
        
        if(sum == k) {       // Nếu tổng bằng k
            cout << "YES";
            return 0;
        }
        else if(sum < k) {   // Nếu tổng nhỏ hơn k, tăng con trỏ trái
            l++;
        }
        else {               // Nếu tổng lớn hơn k, giảm con trỏ phải
            r--;
        }
    }
    
    // Nếu không tìm thấy cặp nào thỏa mãn
    cout << "NO";
    return 0;
}
