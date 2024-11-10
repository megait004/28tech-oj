#include <bits/stdc++.h>
using namespace std;

bool binary_s(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        
        if (arr[mid] == x) {
            return true;
        }
        // Vì mảng sắp xếp theo thứ tự giảm dần, ta cần đảo ngược điều kiện
        else if (arr[mid] > x) {
            l = mid + 1;  // Tìm ở nửa bên trái
        }
        else {
            r = mid - 1;  // Tìm ở nửa bên phải
        }
    }
    return false;
}

int main() {
    int n; 
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        if (binary_s(arr, 0, n - 1, x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;  
        }
    }

    return 0;
}
