#include<iostream>
#include<vector>
using namespace std;

// Hàm kiểm tra dãy ưu thế chẵn
bool dayChan(vector<int> &v) {
    int demc = 0;
    int deml = 0;

    // Đếm số lượng số chẵn và số lẻ
    for (int num : v) {
        if (num % 2 == 0) {
            demc++;
        } else {
            deml++;
        }
    }

    // Kiểm tra điều kiện dãy ưu thế chẵn
    if (demc > deml && v.size() % 2 == 0) return true;
    return false;
}

// Hàm kiểm tra dãy ưu thế lẻ
bool dayLe(vector<int> &v) {
    int demc = 0;
    int deml = 0;

    // Đếm số lượng số chẵn và số lẻ
    for (int num : v) {
        if (num % 2 == 0) {
            demc++;
        } else {
            deml++;
        }
    }

    // Kiểm tra điều kiện dãy ưu thế lẻ
    if (deml > demc && v.size() % 2 == 1) return true;
    return false;
}

int main() {
    int n;
    vector<int> v;

    // Nhập tất cả các số vào vector
    while (cin >> n) {
        v.push_back(n);
    }

    // Kiểm tra nếu dãy thỏa mãn điều kiện ưu thế chẵn hoặc ưu thế lẻ
    if (dayChan(v) || dayLe(v)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
