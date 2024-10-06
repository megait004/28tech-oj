#include<iostream>
#include<set>
using namespace std;

int main() {
    // Đọc vào hai giá trị n và m
    int n, m;
    cin >> n >> m;

    // Khai báo mảng a để lưu n phần tử
    int a[n];
    // Khai báo một tập hợp se để lưu trữ các phần tử của mảng thứ hai
    set<int> se;

    // Đọc vào n phần tử và lưu vào mảng a
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Đọc vào m phần tử và thêm vào tập hợp se
    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        se.insert(x);  // Thêm phần tử x vào tập hợp
    }

    // Duyệt qua từng phần tử của mảng a
    for(int i = 0; i < n; i++) {
        // Kiểm tra xem phần tử a[i] có nằm trong tập hợp se hay không
        if(se.find(a[i]) == se.end()) {
            // Nếu không tìm thấy a[i] trong tập hợp thì in ra "29tech"
            cout << "29tech" << " ";
        } else {
            // Nếu tìm thấy a[i] trong tập hợp thì in ra "28tech"
            cout << "28tech" << " ";
        }
    }

    return 0;
}
