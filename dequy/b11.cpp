#include <iostream>
#include <string>
using namespace std;

string binary(long long n) {
    if (n == 0) return "0"; // Trường hợp đặc biệt cho số 0
    string result = "";
    while (n > 0) {
        result = to_string(n % 2) + result; // Thêm kết quả phép chia vào đầu chuỗi
        n /= 2;
    }
    return result;
}

int main() {
    long long n;
    cin >> n;
    cout << binary(n);
    return 0;
}
