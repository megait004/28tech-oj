#include<iostream>
#include<algorithm>
using namespace std;

long long mod = 1e9 + 7; 

int main() {
    int n;
    cin >> n;
    
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    sort(arr, arr + n); // Sắp xếp mảng arr theo thứ tự tăng dần

    long long sum = 0; // Khai báo biến sum để lưu tổng theo công thức, kiểu dữ liệu long long để tránh tràn số

    // Duyệt qua mảng đã sắp xếp và tính tổng theo công thức
    for (int i = 0; i < n; i++) {
        sum = sum % mod + (arr[i] * (long long)i) % mod; // Cập nhật giá trị sum theo công thức (arr[i] * i) và luôn thực hiện phép modulo mod để tránh tràn số
    }

    cout << sum % mod; // In ra tổng cuối cùng sau khi đã thực hiện phép modulo với mod để đảm bảo kết quả không vượt quá giới hạn

    return 0; 
}
