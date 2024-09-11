#include<iostream>
#include<cmath>
using namespace std;

int ptnt(long long n) {
    int dem = 0; // Đếm số lượng thừa số nguyên tố khác nhau
    
    // Kiểm tra các số nguyên tố từ 2 đến căn bậc hai của n
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) { // Nếu i là ước của n
            dem++; // Tăng số đếm thừa số nguyên tố khác nhau
            while (n % i == 0) { // Chia liên tục cho i
                n = n / i;
            }
        }
    }
    
    // Nếu sau khi chia hết mà n vẫn còn lớn hơn 1, thì n là một thừa số nguyên tố
    if (n > 1) {
        dem++;
    }
    
    return dem; // Trả về số lượng thừa số nguyên tố khác nhau
}

int main() {
    long long n;
    cin >> n;
    cout << ptnt(n); // In ra kết quả
    return 0;
}
