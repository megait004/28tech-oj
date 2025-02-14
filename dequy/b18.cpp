#include <bits/stdc++.h>
using namespace std;

long long tongChan(long long  n) {
    if (n == 0) return 0;
   	long long  digit = n % 10;
    if (digit % 2 == 0) 
        return digit + tongChan(n / 10);
    return tongChan(n / 10);
}

long long tongLe(long long  n) {
    if (n == 0) return 0;
   	long long  digit = n % 10; 
    if (digit % 2 == 1) 
        return digit + tongLe(n / 10);
    return tongLe(n / 10); 
}

int main() {
    long long  n;
    cin >> n;
    cout << tongChan(n) << " " << tongLe(n) << endl; 
    return 0;
}
