#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    multiset<int> se;

    // Nhập mảng A[] và thêm vào multiset `se`
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        se.insert(arr[i]);
    }

    int q;
    cin >> q;

    // Xử lý các truy vấn
    while (q--) {
        int tt;
        cin >> tt;
        if (tt == 1) { // Thao tác 1: Thêm 1 phần tử X vào mảng
            int add;
            cin >> add;
            se.insert(add);
        } 
        else if (tt == 2) { // Thao tác 2: Xóa 1 phần tử X khỏi mảng
            int xoa;
            cin >> xoa;
            auto it = se.find(xoa);
            if (it != se.end()) {
                se.erase(it); // Chỉ xóa nếu phần tử tồn tại
            }
        } 
        else if (tt == 3) { // Thao tác 3: Kiểm tra xem phần tử X có trong mảng không
            int x;
            cin >> x;
            if (se.find(x) != se.end()) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
