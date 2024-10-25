#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m; 
    cin >> n >> m; 
    
    vector<int> nam(n); 
    vector<int> nu(m); 
   
    for (int i = 0; i < n; i++) {
        cin >> nam[i];
    }
    
    for (int i = 0; i < m; i++) {
        cin >> nu[i];
    }
    
    // Sắp xếp chiều cao của các bạn nam và nữ
    sort(nam.begin(), nam.end());
    sort(nu.begin(), nu.end());
    
    int i = 0; // Chỉ số cho vector nam
    int j = 0; // Chỉ số cho vector nu
    int dem = 0; // Biến đếm số cặp khiêu vũ
    
    // Tìm số cặp phù hợp
    while (i < n && j < m) {
        if (nam[i] <= nu[j]) {
            // Nếu chiều cao của nam không lớn hơn chiều cao của nữ, chuyển sang nam tiếp theo
            i++;
        } else {
            // Nếu chiều cao của nam lớn hơn chiều cao của nữ
            // Tăng số cặp và chuyển sang cả nam và nữ tiếp theo
            i++;
            j++;
            dem++;
        }
    }
    
    cout << dem << endl;

    return 0;
}