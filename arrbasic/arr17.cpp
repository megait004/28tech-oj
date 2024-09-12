#include <iostream>
using namespace std;
   // Khai báo mảng tĩnh với kích thước tối đa là 10^6
int A[1000000];
int main() {
    int N;
    cin >> N;
    // Nhập mảng
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Kiểm tra đối xứng
    bool isSymmetric = true;
    // duyệt đên n / 2 là duyệt 1 nửa 
    for (int i = 0; i < N / 2; ++i) {
    	// kiểm tra phần tử đầu tiên với phần tử cuối cùng
        if (A[i] != A[N - i - 1]) {
            isSymmetric = false;
            break;
        }
    }

    // Xuất kết quả
    if (isSymmetric) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
