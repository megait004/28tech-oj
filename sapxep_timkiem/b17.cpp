#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Hàm tìm vị trí đầu tiên của phần tử x trong khoảng [l, r]
int firstPos(int arr[], int l, int r, int x) {
    int res = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2; // Tính mid an toàn tránh tràn số
        if (x == arr[mid]) {
            res = mid;
            r = mid - 1; // Tìm tiếp về phía trái để đảm bảo vị trí đầu tiên
        } else if (x < arr[mid]) {
            r = mid - 1; // Dịch sang trái
        } else {
            l = mid + 1; // Dịch sang phải
        }
    }
    return res;
}

// Hàm tìm vị trí cuối cùng của phần tử x trong khoảng [l, r]
int lastPos(int arr[], int l, int r, int x) {
    int res = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (x == arr[mid]) {
            res = mid;
            l = mid + 1; // Tìm tiếp về phía phải để đảm bảo vị trí cuối cùng
        } else if (x < arr[mid]) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n); // Sắp xếp mảng tăng dần

    long long dem = 0;
    for (int i = 0; i < n; i++) {
        int p1 = firstPos(arr, i + 1, n - 1, k - arr[i]);
        int p2 = lastPos(arr, i + 1, n - 1, k - arr[i]);
        if (p1 != -1) {
            dem += (p2 - p1 + 1); // Đếm số lượng phần tử có giá trị bằng k - arr[i]
        }
    }
    cout << dem << endl;
    return 0;
}
