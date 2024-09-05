#include<iostream>
#include<cmath>
using namespace std;

int main() {
    long long t, n;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> n;
        long long largest_prime = 0; // Khởi tạo không cần -1, giá trị này sẽ được cập nhật

        // Kiểm tra các ước số nguyên tố từ 2 đến sqrt(n)
        for (int j = 2; j <= sqrt(n); j++) {
            while (n % j == 0) {  // Chia cho j đến khi không chia hết
                largest_prime = j;  // Cập nhật ước số nguyên tố lớn nhất
                n /= j;
            }
        }

        // Nếu sau khi chia, n > 1 thì n là số nguyên tố lớn nhất còn lại
        if (n > 1) {
            largest_prime = n;
        }

        cout << largest_prime << endl;  // In ước số nguyên tố lớn nhất
    }

    return 0;
}
