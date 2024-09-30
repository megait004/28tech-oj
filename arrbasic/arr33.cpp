#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Nhập số lượng phần tử trong mảng (vector)
    int n; 
    cin >> n;

    // Nhập số lần xoay vòng
    int k; 
    cin >> k;

    // Khai báo một vector có kích thước n để lưu các phần tử
    vector<int> v(n);

    // Nhập giá trị cho từng phần tử của vector
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Tính số lần xoay thực sự cần thiết
    // Nếu k lớn hơn n, chỉ cần xoay k % n lần là đủ
    int turn = k % n;

    // In ra các phần tử của vector sau khi xoay vòng về bên phải
    for (int i = 0; i < n; i++) {
        // Nếu chỉ số hiện tại i nhỏ hơn số lần xoay (turn)
        if (i < turn) {
            // In phần tử từ cuối mảng dịch sang trái (tính từ phần tử cuối cùng)
            // v[n + i - turn] là cách để tính toán vị trí của phần tử cần đưa lên đầu
            cout << v[n + i - turn] << " ";
        } else {
            // Nếu chỉ số hiện tại lớn hơn hoặc bằng số lần xoay
            // In phần tử tại vị trí lùi về so với số lần xoay
            cout << v[i - turn] << " ";
        }
    }

    return 0;
}
