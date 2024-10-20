#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;  
    cin >> n; 

    int arr[n]; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    // Phần tử đầu tiên luôn thỏa mãn điều kiện nên in ra
    cout << arr[0] << " ";

    int max_value = arr[0]; // Biến lưu giá trị lớn nhất hiện tại (bắt đầu từ phần tử đầu tiên)
    
    // Duyệt qua các phần tử từ phần tử thứ 2
    for(int i = 1; i < n; i++) {
        if(arr[i] > max_value) { // Kiểm tra nếu phần tử hiện tại lớn hơn giá trị lớn nhất đã gặp
            max_value = arr[i];  // Cập nhật giá trị lớn nhất mới
            cout << max_value << " "; 
        }
    }
}
