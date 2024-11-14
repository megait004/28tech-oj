#include<iostream>
using namespace std;

// Hàm tn kiểm tra xem một số nguyên n có phải là số đối xứng không
bool tn(int n) {
	int lat = 0; // Biến lat để lưu giá trị của n sau khi đảo ngược
	int m = n; // Lưu giá trị ban đầu của n vào m để so sánh sau
	while (n != 0) {
		lat = lat * 10 + n % 10; // Thêm chữ số cuối của n vào lat
		n = n / 10; // Loại bỏ chữ số cuối của n
	}
	// Nếu số đảo ngược lat bằng với số ban đầu m thì n là số đối xứng
	if (lat == m) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int n; 
	cin >> n; 
	int arr[n][n]; // Khởi tạo ma trận kích thước n x n
	
	// Nhập các phần tử của ma trận
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	int dem = 0; // Biến đếm số lượng số đối xứng trong tam giác dưới của ma trận

	// Duyệt qua từng phần tử trong ma trận
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			// Kiểm tra xem phần tử có nằm trong tam giác dưới (i == j hoặc i > j)
			if (i == j || i > j) {
				// Kiểm tra nếu phần tử arr[i][j] là số đối xứng
				if (tn(arr[i][j])) {
					dem++; // Tăng biến đếm lên 1 nếu tìm thấy số đối xứng
				}
			}
		}
	}

	cout << dem; 
}
