#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);

    // Nhập và bình phương từng phần tử trong mảng
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[i] = 1LL * x * x;
    }

    // Sắp xếp mảng đã bình phương
    sort(arr.begin(), arr.end());

    // Kiểm tra tồn tại bộ ba thỏa mãn
    for (int i = n - 1; i >= 2; i--) {
        int l = 0;
        int r = i - 1;
        while (l < r) {
            if (arr[l] + arr[r] == arr[i]) {
                cout << "YES";
                return 0;
            } else if (arr[l] + arr[r] < arr[i]) {
                l++;
            } else {
                r--;
            }
        }
    }

    cout << "NO";
    return 0;
}
