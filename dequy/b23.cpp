#include <iostream>
using namespace std;

bool isAllEven(int A[], int n) {
    // Điều kiện dừng: Nếu chỉ còn một phần tử, kiểm tra nó có chẵn không
    if (n == 0) return true;
    
    // Nếu phần tử hiện tại là số lẻ, trả về false
    if (A[n - 1] % 2 != 0) return false;
    
    // Gọi đệ quy kiểm tra phần còn lại của mảng
    return isAllEven(A, n - 1);
}

int main() {
    int N;
    cin >> N;
    int A[N];
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    if (isAllEven(A, N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
