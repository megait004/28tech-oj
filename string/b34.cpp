#include <bits/stdc++.h>
using namespace std;

bool isNonDecreasing(const string &n) {
    for (size_t i = 1; i < n.size(); i++) {
        if (n[i] < n[i - 1]) {
            return false;
        }
    }
    return true;
}

bool isNonIncreasing(const string &n) {
    for (size_t i = 1; i < n.size(); i++) {
        if (n[i] > n[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string n;
    cin >> n;
    
    if (isNonDecreasing(n) || isNonIncreasing(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
