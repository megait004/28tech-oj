#include<iostream>
using namespace std;

// Hàm để kiểm tra xem một số có phải là số Fibonacci hay không
bool isFibo(long long n) {
    if (n == 0 || n == 1) return true;
    long long a = 0, b = 1;
    while (b <= n) {
        long long c = a + b;
        a = b;
        b = c;
        if (b == n) return true;
    }
    return false;
}

int main() {
    // Đọc số lượng phần tử
    long long n;
    cin >> n;
    
    // Đọc mảng đầu vào
    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Kiểm tra các phần tử trong mảng xem có phải số Fibonacci không
    bool found = false;
    for (long long i = 0; i < n; i++) {
        if (isFibo(arr[i])) {
            cout << arr[i] << " ";
            found = true;
        }
    }
    
    // Nếu không tìm thấy số Fibonacci nào
    if (!found) {
        cout << "NONE";
    }
    
    return 0;
}
