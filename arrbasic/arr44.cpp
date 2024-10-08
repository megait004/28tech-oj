#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int demDayCon(vector<int>& mang, int n) {
    // Bước 1: Biến đổi mảng thành +1 với số lẻ và -1 với số chẵn
    vector<int> bienDoi(n);
    for (int i = 0; i < n; i++) {
        bienDoi[i] = (mang[i] % 2 == 0) ? -1 : 1;
    }

    // Bước 2: Sử dụng tổng tích lũy (prefix sum) để đếm số lượng dãy con có tổng bằng 0
    unordered_map<int, int> demTongTichLuy;
    int tongTichLuy = 0;
    int ketQua = 0;

    // Khởi tạo giá trị 0 của tổng trước khi bắt đầu đếm
    demTongTichLuy[0] = 1;

    for (int i = 0; i < n; i++) {
        tongTichLuy += bienDoi[i];

        // Nếu tổng tích lũy đã xuất hiện trước đó, nghĩa là có dãy con có tổng bằng 0
        if (demTongTichLuy.find(tongTichLuy) != demTongTichLuy.end()) {
            ketQua += demTongTichLuy[tongTichLuy];
        }

        // Cập nhật số lần xuất hiện của tổng tích lũy
        demTongTichLuy[tongTichLuy]++;
    }

    return ketQua;
}

int main() {
    int n;
    cin >> n;
    vector<int> mang(n);
    for (int i = 0; i < n; i++) {
        cin >> mang[i];
    }

    cout << demDayCon(mang, n) << endl;

    return 0;
}
