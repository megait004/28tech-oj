#include<iostream>
#include<algorithm>
using namespace std;

// Hàm đệ quy để tìm số bước tối thiểu để đưa n về 1
int f(int n) {
    // Trường hợp cơ sở: nếu n = 1 thì không cần bước nào, trả về 0
    if(n == 1) return 0;

    // Khởi tạo các giá trị x, y, z lớn để lưu số bước cần thiết
    int x = 1e9, y = 1e9, z = 1e9;

    // Nếu n chia hết cho 2, tính số bước khi giảm n bằng cách chia 2
    if(n % 2 == 0) {
        x = 1 + f(n / 2);
    }

    // Nếu n chia hết cho 3, tính số bước khi giảm n bằng cách chia 3
    if(n % 3 == 0) {
        y = 1 + f(n / 3);
    }

    // Tính số bước khi giảm n bằng cách trừ 1
    if(n > 1) {
        z = 1 + f(n - 1);
    }

    // Trả về giá trị nhỏ nhất trong các cách để đưa n về 1
    return min({x, y, z});
}

int main() {
    int n;
    cin >> n; 
    cout << f(n); // In ra kết quả là số bước tối thiểu
}
