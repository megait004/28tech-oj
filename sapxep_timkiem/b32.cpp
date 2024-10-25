#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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
    
    sort(nam.begin(), nam.end()); 
    sort(nu.begin(), nu.end()); 
    
    int i = 0, j = 0, dem = 0; // Chỉ số và biến đếm cặp

    while (i < n && j < m) {
        // Nếu chiều cao gần nhau (chênh lệch <= 1)
        if (abs(nam[i] - nu[j]) <= 1) {
            dem++; // Tăng số cặp
            i++; // Chuyển sang nam tiếp theo
            j++; // Chuyển sang nữ tiếp theo
        }
        // Nếu nam thấp hơn nữ, chuyển sang nam tiếp theo
        else if (nam[i] < nu[j]) {
            i++;
        }
        // Nếu nam cao hơn nữ, chuyển sang nữ tiếp theo
        else {
            j++;
        }
    }
    
    cout << dem << endl; 
    return 0; 
}