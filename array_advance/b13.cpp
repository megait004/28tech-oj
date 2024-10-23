#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n; 
    cin >> n;

    // Các mệnh giá tiền
    vector<int> v = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    
    long long  dem = 0; // Biến đếm số tờ tiền

    // Duyệt qua các mệnh giá từ lớn đến nhỏ
    for (long long value : v) {
        if (n == 0) break; // Nếu n đã là 0 thì dừng lại
        dem += n / value; // Số tờ tiền của mệnh giá hiện tại
        n %= value; // Cập nhật n
    }

    cout << dem; 
    return 0;
}
