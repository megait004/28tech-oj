#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_set<int> a, b;  // Khai báo hai unordered_set để lưu các phần tử khác nhau của mảng a và b
    int temp;

    // Nhập các phần tử cho mảng a và thêm vào unordered_set a
    for (int i = 0; i < n; i++) {
        cin >> temp;
        a.insert(temp);
    }

    // Nhập các phần tử cho mảng b và thêm vào unordered_set b
    for (int i = 0; i < m; i++) {
        cin >> temp;
        b.insert(temp);
    }

    // Tìm và lưu giao của 2 unordered_set a và b
    vector<int> intersection;
    for (int i : a) {
        if (b.find(i) != b.end()) {  // Nếu phần tử i có trong cả a và b
            intersection.push_back(i);
        }
    }

    // Sắp xếp và in giao của 2 mảng
    sort(intersection.begin(), intersection.end());
    for (int i : intersection) {
        cout << i << " ";
    }
    cout << endl;

    // Tìm và lưu hợp của 2 unordered_set a và b
    vector<int> union_set;
    for (int i : a) {
        union_set.push_back(i);  // Thêm các phần tử của a vào hợp
    }
    for (int i : b) {
        if (a.find(i) == a.end()) {  // Nếu phần tử b[i] không có trong a
            union_set.push_back(i);
        }
    }

    // Sắp xếp và in hợp của 2 mảng
    sort(union_set.begin(), union_set.end());
    for (int i : union_set) {
        cout << i << " ";
    }

    return 0;
}
