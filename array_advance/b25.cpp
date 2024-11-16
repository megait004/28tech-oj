#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int arr[n]; 

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Khai báo 3 vector để lưu các giá trị 0, 1, 2
    vector<int> v0;
    vector<int> v1;
    vector<int> v2;

    // Phân loại các giá trị vào các vector v0, v1, v2 tương ứng
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            v0.push_back(arr[i]); // Nếu giá trị là 0, thêm vào v0
        }
        if (arr[i] == 1) {
            v1.push_back(arr[i]); // Nếu giá trị là 1, thêm vào v1
        }
        if (arr[i] == 2) {
            v2.push_back(arr[i]); // Nếu giá trị là 2, thêm vào v2
        }
    }

    // In ra các giá trị trong vector v0 (toàn bộ giá trị 0)
    for (int i : v0) {
        cout << i << " ";
    }
    // In ra các giá trị trong vector v1 (toàn bộ giá trị 1)
    for (int i : v1) {
        cout << i << " ";
    }
    // In ra các giá trị trong vector v2 (toàn bộ giá trị 2)
    for (int i : v2) {
        cout << i << " ";
    }

    return 0;
}
