#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    // Nhập vào số giờ, số phút, k phút
    long long h, m, k;
    cin >> h >> m >> k;

    // Tính tổng số phút sau k phút
    long long totalMinutes = m + k;

    // Tính số phút mới và số giờ mới
    long long newMinutes = totalMinutes % 28;
    long long newHours = (h + totalMinutes / 28) % 28;

    // In ra kết quả với định dạng giờ và phút có thể có thêm số 0
    cout << setfill('0') << setw(2) << newHours << "h:";
    cout << setfill('0') << setw(2) << newMinutes << "m";

    return 0;
}
