#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long N;
    cin >> N;

    // Biến đếm số lần xuất hiện của các chữ số nguyên tố
    int count2 = 0, count3 = 0, count5 = 0, count7 = 0;

    // Mảng lưu trữ thứ tự xuất hiện của các chữ số nguyên tố
    int primeOrder[100] = {0}; // 2 -> 1, 3 -> 2, 5 -> 3, 7 -> 4
    int orderIndex = 0;

    // Duyệt qua từng chữ số của N
    while (N > 0) {
        int digit = N % 10; // Lấy chữ số cuối cùng
        if (digit == 2) {
            count2++;
            primeOrder[orderIndex++] = 2;
        } else if (digit == 3) {
            count3++;
            primeOrder[orderIndex++] = 3;
        } else if (digit == 5) {
            count5++;
            primeOrder[orderIndex++] = 5;
        } else if (digit == 7) {
            count7++;
            primeOrder[orderIndex++] = 7;
        }
        N /= 10; // Loại bỏ chữ số cuối
    }

    // In ra kết quả theo thứ tự từ bé đến lớn
    if (count2 > 0) cout << "2 " << count2 << endl;
    if (count3 > 0) cout << "3 " << count3 << endl;
    if (count5 > 0) cout << "5 " << count5 << endl;
    if (count7 > 0) cout << "7 " << count7 << endl;

    cout << endl;

    // In ra kết quả theo thứ tự xuất hiện trong N (đã lưu ngược vì duyệt từ cuối lên)
    for (int i = orderIndex - 1; i >= 0; --i) {
        if (primeOrder[i] == 2 && count2 > 0) {
            cout << "2 " << count2 << endl;
            count2 = 0;
        } else if (primeOrder[i] == 3 && count3 > 0) {
            cout << "3 " << count3 << endl;
            count3 = 0;
        } else if (primeOrder[i] == 5 && count5 > 0) {
            cout << "5 " << count5 << endl;
            count5 = 0;
        } else if (primeOrder[i] == 7 && count7 > 0) {
            cout << "7 " << count7 << endl;
            count7 = 0;
        }
    }

    return 0;
}
