#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    // Nhập số phần tử mảng n và số k
    long long n; cin >> n;
    long long k; cin >> k;
    long long a[n];

    // Nhập mảng a có n phần tử
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    long long F[n]; // Mảng lưu trữ kết quả tính toán
    F[0] = 0; // Vị trí đầu tiên có chi phí bằng 0

    // Duyệt qua các phần tử từ 1 đến n-1
    for(long long i = 1; i < n; i++){
        // Xét k ô đứng trước để tìm chi phí tối thiểu
        long long ans = 1e18; // Khởi tạo với giá trị lớn

        // Kiểm tra các ô đứng trước trong khoảng k
        for(int j = 1; j <= k; j++){
            if(i - j >= 0) // Chỉ xét khi i-j là hợp lệ
                ans = min(ans, F[i - j] + abs(a[i] - a[i - j]));
        }
        F[i] = ans; // Gán chi phí tối thiểu tại vị trí i
    }

    // Xuất ra chi phí tối thiểu để đến ô cuối cùng
    cout << F[n - 1] << endl;
}
