#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n; 
    vector<long long> v(n);
    
    // với giới hạn A[i] ≤ 10^6, ta có thể dùng vector để đếm
    vector<long long > countA(1000001, 0); // Giả sử A[i] ≤ 10^6

    // Đếm tần suất của mỗi số
    for(long long i = 0; i < n; i++) {
        cin >> v[i];
        countA[v[i]]++;
    }

    long long dem = 0; // Sử dụng long long để tránh tràn số khi tính cặp

    // Tính số lượng cặp cho mỗi số có tần suất >= 2
    for(long long i = 0; i <= 1000000; i++) {
        if(countA[i] >= 2) {
            dem += ((countA[i]) * (countA[i] - 1)) / 2; // Tổ hợp chập 2
        }
    }

    cout << dem << "\n"; 
    return 0;
}
