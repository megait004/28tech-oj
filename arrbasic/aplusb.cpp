#include<iostream>
using namespace std;

int main() {
    int n; 
    // Nhập số lượng test case
    cin >> n;

    // Lặp lại cho mỗi test case
    while (n--) {
        int so1, so2;
        // Nhập hai số nguyên
        cin >> so1 >> so2;
        
        // Xuất tổng của hai số
        cout << so1 + so2 << endl;
    }

    return 0;
}
