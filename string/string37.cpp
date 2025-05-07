#include <iostream>
#include <string>
using namespace std;
bool isDivisibleBy3(const string& n) {
    int sum = 0;
    for (char digit : n) {
        sum += digit - '0';
    }
    return sum % 3 == 0;
}
bool isDivisibleBy5(const string& n) {
    char lastDigit = n.back();
    return lastDigit == '0' || lastDigit == '5';
}

int main() {
    string N;
    cin >> N;

    if (isDivisibleBy3(N) && isDivisibleBy5(N)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}

