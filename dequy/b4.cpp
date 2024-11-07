#include <iostream> 
using namespace std;

// Hàm đệ quy tính tổng các số chẵn và lẻ từ 1 đến n với quy tắc:
// - Cộng số chẵn
// - Trừ số lẻ
int sum(int n) {
    if (n == 1) return -1;  // Trường hợp cơ bản: nếu n là 1, trả về -1 (số lẻ duy nhất)

    if (n % 2 == 0) {  // Nếu n là số chẵn
        return n + sum(n - 1);  // Cộng số chẵn n với kết quả của hàm sum(n-1)
    }
    else if (n % 2 == 1) {  // Nếu n là số lẻ
        return sum(n - 1) - n;  // Trừ số lẻ n từ kết quả của hàm sum(n-1)
    }
}

int main() {
    int n;  
    cin >> n;  
    cout << sum(n);  
    return 0;  
}
