#include <iostream>
using namespace std;

// Định nghĩa hằng số MOD là 10^9 + 7 để dùng trong các phép toán modulo
const int MOD = 1e9 + 7;

// Hàm đệ quy tính lũy thừa a^b với phương pháp Binary Exponentiation
long long pow1(long long a, long long b) {
    // Nếu b = 0, trả về 1 vì bất kỳ số nào lũy thừa 0 đều bằng 1
    if (b == 0) return 1; 
    
    // Tính x là lũy thừa của a^(b/2) bằng cách gọi đệ quy
    long long x = pow1(a, b / 2);
    
    // Tính bình phương của x và lấy modulo để tránh tràn số , trường hợp chẵn 
    x = (x * x) % MOD;
    
    // Nếu b là số lẻ, nhân thêm với a và lấy modulo
    if (b % 2 == 1) {
        x = (x * a) % MOD;
    }
    
    // Trả về kết quả của a^b % MOD
    return x;
}

int main() {
    // Nhập hai số a và b từ người dùng
    long long a, b;
    cin >> a >> b;
    
    // In ra kết quả a^b % MOD bằng cách gọi hàm pow1
    cout << pow1(a, b) << endl;
    
    return 0;
}
