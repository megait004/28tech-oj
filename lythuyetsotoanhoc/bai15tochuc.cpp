#include<iostream>
using namespace std;

void primeFactori(long long n) {
    int count_factors = 0; // đếm số lượng thừa số nguyên tố khác nhau

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int count_power = 0; // đếm bậc của thừa số nguyên tố hiện tại
            while (n % i == 0) {
                count_power++;
                n /= i;
            }
            if (count_power > 1) {
                cout << "0"; // nếu thừa số xuất hiện hơn 1 lần, không phải số Sphenic
                return;
            }
            count_factors++;
        }
    }

    // Kiểm tra xem `n` có còn là một số nguyên tố hay không
    if (n > 1) {
        count_factors++;
    }

    // Nếu có đúng 3 thừa số nguyên tố khác nhau, xuất ra 1, ngược lại 0
    if (count_factors == 3) {
        cout << "1";
    } else {
        cout << "0";
    }
}

int main() {
    long long n;
    cin >> n;
    primeFactori(n);
    return 0;
}
