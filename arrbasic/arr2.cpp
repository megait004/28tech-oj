#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            sum += a[i];
            count++;
        }
    }

    if (count == 0) cout << -1;
    else cout << fixed << setprecision(2) << (double)sum / count;
    return 0;
}