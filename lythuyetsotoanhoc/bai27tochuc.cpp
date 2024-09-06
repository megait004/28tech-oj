#include<iostream>
#include<cmath>
using namespace std;

int ptnt(int n) {
    int count_factor = 0;
    // Kiểm tra các ước số nhỏ hơn sqrt(n)
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            count_factor++;
            while (n % i == 0) {
                n = n / i;
            }
        }
    }
    // Nếu sau khi chia, n vẫn lớn hơn 1 thì n là một thừa số nguyên tố lớn hơn sqrt(n)
    if (n > 1) {
        count_factor++;
    }
    // Nếu có ít nhất 3 thừa số nguyên tố khác nhau
    return count_factor >= 3;
}

int thuannghich(int n) {
    int lat = 0;
    int m = n;
    while (n != 0) {
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    return lat == m;
}

int main() {
    int a, b;
    cin >> a >> b;
    bool found = false;
    
    for (int i = a; i <= b; i++) {
        if (thuannghich(i) && ptnt(i)) {
            cout << i << " ";
            found = true;
        }
    }
    
    if (!found) {
        cout << -1;
    }

    return 0;
}
