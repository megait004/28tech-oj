#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    // Đếm số lần xuất hiện của từng chữ số từ 0 đến 9
    vector<int> count(10, 0);

    // Nhập mảng và đếm chữ số
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        int num = abs(v[i]); // Lấy giá trị tuyệt đối của số để bỏ qua dấu âm

        // Tách từng chữ số và đếm
        if (num == 0) {
            count[0]++;
        } else {
            while (num > 0) {
                int digit = num % 10;
                count[digit]++;
                num /= 10;
            }
        }
    }

    // In kết quả
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            cout << i << " " << count[i] << endl;
        }
    }

    return 0;
}
