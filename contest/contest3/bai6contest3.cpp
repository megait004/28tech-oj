#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int dem2 = 0;
    int dem3 = 0;
    int dem5 = 0;
    int dem7 = 0;
    int dv;

    // Sử dụng vòng lặp while để lặp qua từng chữ số của n
    while (n > 0) {
        dv = n % 10; // Lấy chữ số cuối cùng của n
        if (dv == 2) {
            dem2++;
        } else if (dv == 3) {
            dem3++;
        } else if (dv == 5) {
            dem5++;
        } else if (dv == 7) {
            dem7++;
        }
        n = n / 10; // Bỏ đi chữ số cuối cùng đã xử lý
    }

    // In ra tần suất nếu số đó có xuất hiện
    if (dem2 > 0) cout << "2 " << dem2 << endl;
    if (dem3 > 0) cout << "3 " << dem3 << endl;
    if (dem5 > 0) cout << "5 " << dem5 << endl;
    if (dem7 > 0) cout << "7 " << dem7 << endl;

    return 0;
}
