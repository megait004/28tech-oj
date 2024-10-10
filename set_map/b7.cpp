#include <iostream>
#include <vector>
#include <map>
using namespace std;

void tim_phan_tu_chung(const vector<vector<int>>& ma_tran, int N) {
    map<int, int> dem_phan_tu;

    // Đánh dấu các giá trị của dòng đầu tiên
    for (int so : ma_tran[0]) {
        dem_phan_tu[so] = 1;
    }

    // Xử lý các dòng tiếp theo
    for (int i = 1; i < N; ++i) {
        map<int, int> dem_tam_thoi;

        // Chỉ giữ lại các giá trị đã tồn tại trong các dòng trước đó
        for (int so : ma_tran[i]) {
            if (dem_phan_tu.find(so) != dem_phan_tu.end() && dem_phan_tu[so] == i) {
                dem_tam_thoi[so] = i + 1;
            }
        }

        // Cập nhật dem_phan_tu
        dem_phan_tu = dem_tam_thoi;
    }

    // Tìm các giá trị có count == N
    bool tim_thay = false;
    for (const auto& cap : dem_phan_tu) {
        if (cap.second == N) {
            cout << cap.first << " ";
            tim_thay = true;
        }
    }

    // Nếu không có số nào xuất hiện ở mọi dòng
    if (!tim_thay) {
        cout << "NOT FOUND";
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> ma_tran(N, vector<int>(N));

    // Nhập ma trận
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> ma_tran[i][j];
        }
    }

    // Gọi hàm để tìm và in các phần tử chung
    tim_phan_tu_chung(ma_tran, N);

    return 0;
}
