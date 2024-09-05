#include<iostream>
#include<cmath>
using namespace std;

// Hàm kiểm tra số "đẹp" cụ thể là phân tích thừa số nguyên tố
bool isBeautifulNumber(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int count = 0; 
            while (n % i == 0) {
                count++; // đếm sỗ lần xuất hiện của từng thừa số 
                n /= i;
            }
            if (count >= 2) { // Có một thừa số nguyên tố với số mũ >= 2
                return true;
            }
        }
    }
    return  false ; 
}

int main() {
    int a, b;
    cin >> a >> b;

    // Duyệt qua đoạn từ a tới b
    for (int i = a; i <= b; i++) {
        if (isBeautifulNumber(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
