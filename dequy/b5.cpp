#include<iostream>
using namespace std;

// Hàm đệ quy tính giai thừa của một số nguyên dương n
int s(int n) {
    if(n == 0) { // Điều kiện dừng: nếu n = 0 thì trả về 1
        return 1;
    }
    else 
        return n * s(n - 1); // Gọi đệ quy với n giảm 1
}

int main() {
    int n;
    cin >> n; 
    cout << s(n); 
    return 0;
}
