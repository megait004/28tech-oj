#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> v;
    map<int, int> mp;
    int n;

    // Đọc các số nguyên từ đầu vào cho đến khi không còn số nào
    while (cin >> n) {
        v.push_back(n);
        mp[n]++;
    }

    // In ra các số nguyên tố và tần suất của chúng
    for (int i : v) {
        if (isPrime(i) && mp[i] > 0) {
            cout << i << " " << mp[i] << endl;
            mp[i] = 0; // Đảm bảo chỉ in ra một lần cho mỗi số nguyên tố
        }
    }

    return 0;
}