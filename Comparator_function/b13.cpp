#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Hàm tìm phần tử lớn nhất nhỏ hơn hoặc bằng x trong mảng v.
int low(vector<int> &v, int l, int r, int x) {
    int ans = -1; // Khởi tạo ans để lưu phần tử lớn nhất nhỏ hơn hoặc bằng x.
    while (l <= r) {
        int m = (l + r) / 2; // Tìm vị trí giữa.
        if (v[m] <= x) {
            ans = v[m]; // Cập nhật ans nếu tìm thấy phần tử nhỏ hơn hoặc bằng x.
            l = m + 1; // Tiếp tục tìm kiếm ở nửa bên phải (tìm phần tử lớn hơn có thể nhỏ hơn hoặc bằng x).
        } else {
            r = m - 1; // Tìm kiếm trong nửa bên trái nếu phần tử giữa lớn hơn x.
        }
    }
    return ans; // Trả về ans, là phần tử lớn nhất nhỏ hơn hoặc bằng x.
}

int main() {
    int n, x;
    cin >> n >> x; 
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end()); // Sắp xếp mảng để thực hiện tìm kiếm nhị phân.
    
    int result = low(v, 0, n - 1, x); // Gọi hàm tìm phần tử lớn nhất nhỏ hơn hoặc bằng x.
    
    if (result == -1) {
        cout << "NOT FOUND"; // In ra "NOT FOUND" nếu không tìm thấy phần tử thỏa mãn.
    } else {
        cout << result; // In ra phần tử tìm được.
    }

    return 0;
}
