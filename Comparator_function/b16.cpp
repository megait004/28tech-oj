#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, m; 
    cin >> n >> m;

    vector<int> v(n);  // Mảng A (n phần tử)
    vector<int> v1(m); // Mảng B (m phần tử)

    // Nhập mảng A
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Nhập mảng B
    for(int i = 0; i < m; i++) {
        cin >> v1[i];
    }

    // Sắp xếp mảng B để sử dụng lower_bound
    sort(v1.begin(), v1.end());

    // Tìm và in ra số lượng phần tử lớn hơn hoặc bằng từng phần tử của A trong B
    for(int i = 0; i < n; i++) {
        // Tìm vị trí đầu tiên mà phần tử trong v1 lớn hơn hoặc bằng v[i]
        auto pos = lower_bound(v1.begin(), v1.end(), v[i]);

        // Số phần tử lớn hơn hoặc bằng v[i] là từ vị trí tìm được đến cuối mảng
        cout << (v1.end() - pos) << " "; 
    }

    return 0; 
}
