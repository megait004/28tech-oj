#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Hàm tính tổng chữ số của một số
int sumcs(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Hàm so sánh để sắp xếp theo tổng chữ số
bool compare(int a, int b) {
    int sumA = sumcs(a);
    int sumB = sumcs(b);
    if (sumA == sumB) return a < b; // Nếu tổng chữ số bằng nhau, số nhỏ hơn sẽ đứng trước
    return sumA < sumB; // Sắp xếp theo tổng chữ số tăng dần
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sắp xếp mảng với điều kiện đã xác định
    sort(arr.begin(), arr.end(), compare);

    // In ra kết quả sau khi sắp xếp
    for (int i : arr) {
        cout << i << " ";
    }
    
    return 0;
}
