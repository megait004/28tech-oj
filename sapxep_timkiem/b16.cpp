#include<iostream>
#include<algorithm>
using namespace std;

// Hàm so sánh để sắp xếp các khoảng thời gian dựa trên ngày kết thúc
bool cmp(pair<int, int> x , pair<int,int> y) {
    return x.second < y.second; // Sắp xếp theo thứ tự ngày kết thúc
}

int main() {
    int n; 
    cin >> n; 
    pair<int, int> a[n]; // Khai báo mảng các khoảng thời gian

    // Nhập từng khoảng thời gian
    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second; // a[i].first là ngày bắt đầu, a[i].second là ngày kết thúc
    }

    // Sắp xếp các khoảng thời gian theo ngày kết thúc
    sort(a, a + n, cmp);

    int dem = 1; // Biến đếm số ban nhạc Lệ Rơi có thể tham gia
    int kt = a[0].second; // Ngày kết thúc của ban nhạc đầu tiên

    // Kiểm tra từng ban nhạc
    for(int i = 1; i < n; i++) {
        // Nếu ngày bắt đầu của ban nhạc hiện tại lớn hơn ngày kết thúc của ban nhạc trước
        if(a[i].first > kt) {
            dem++; // Tăng số lượng ban nhạc lên
            kt = a[i].second; // Cập nhật ngày kết thúc mới
        }
    }

    cout << dem; 
    return 0; 
}
