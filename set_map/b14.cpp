#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    // Nhập số lượng phần tử của mảng
    int N;
    cin >> N;
    
    // Nhập mảng A[]
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    // Khởi tạo mảng F[] để lưu số lượng các giá trị khác nhau từ i đến N-1
    vector<int> F(N);
    
    // Sử dụng set để theo dõi các phần tử đã xuất hiện
    set<int> se;
    
    // Duyệt ngược từ N-1 về 0 và xây dựng mảng F[]
    for (int i = N - 1; i >= 0; --i) {
        se.insert(A[i]); // Thêm phần tử A[i] vào set
        F[i] = se.size(); // Số lượng phần tử khác nhau là kích thước của set
    }
    
    // Nhập số lượng truy vấn
    int Q;
    cin >> Q;
    
    // Xử lý mỗi truy vấn
    while (Q--) {
        int L;
        cin >> L;
        cout << F[L] << endl; 
    }

    return 0;
}
