#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    map<int, int> countMap;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Xử lý và in ra lần xuất hiện của mỗi phần tử
    for (int i = 0; i < n; i++) {
        int value = A[i];
        countMap[value]++; // Tăng số lần đã xuất hiện của value trong map
        cout << countMap[value] << " ";
    }

    return 0;
}
