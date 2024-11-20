#include<iostream>
#include<cmath>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int dem = 0;
    bool countedCenter = false; // Biến cờ để kiểm tra phần tử giao nhau

    // Đếm các số nguyên tố trên đường chéo chính và phụ
    for (int i = 0; i < n; i++) {
        // Đếm số nguyên tố trên đường chéo chính (arr[i][i])
        if (isPrime(arr[i][i])) {
            dem++;
        }
        
        // Đếm số nguyên tố trên đường chéo phụ (arr[i][n-i-1])
        if (isPrime(arr[i][n-i-1])) {
            // Nếu i == n-i-1, nghĩa là phần tử giao nhau, chỉ đếm một lần
            if (i == n - i - 1 && isPrime(arr[i][i]) && !countedCenter) {
                countedCenter = true; // Đánh dấu là đã đếm phần tử giao nhau
            } else if (i != n - i - 1) {
                dem++; // Đếm phần tử nếu không phải giao nhau
            }
        }
    }

    cout << dem << endl;
    return 0;
}
