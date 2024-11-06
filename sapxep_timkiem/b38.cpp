#include<iostream>
#include<algorithm>
using namespace std;

// Hàm so sánh để sắp xếp các bộ phim dựa trên thời gian kết thúc
bool cmp(pair<int, int> x, pair<int, int> y) {
    return x.second < y.second; // Sắp xếp theo thứ tự thời gian kết thúc
}

int main() {
    int n; 
    cin >> n; // Nhập số lượng bộ phim
    pair<int, int> a[n];

    // Nhập thời gian bắt đầu và kết thúc của từng bộ phim
    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    // Sắp xếp các bộ phim theo thời gian kết thúc
    sort(a, a + n, cmp);

    int dem = 1; // Đếm số lượng phim có thể xem
    int kt = a[0].second; // Đặt thời gian kết thúc của phim đầu tiên

    // Kiểm tra từng phim để xem có chồng chéo thời gian hay không
    for(int i = 1; i < n; i++) {
        if(a[i].first >= kt) { // Nếu thời gian bắt đầu của phim sau >= thời gian kết thúc phim trước
            dem++;
            kt = a[i].second; // Cập nhật thời gian kết thúc
        }
    }

    cout << dem; 
    return 0;
}
