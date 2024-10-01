#include<iostream>
#include<vector>

// Mảng đánh dấu, dùng để lưu số lần xuất hiện của các phần tử từ 0 đến 1.000.000
int mark[1000001]; 

using namespace std;

int main(){
	int n; 
	cin >> n; // Nhập số lượng phần tử của mảng

	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i]; // Nhập các phần tử của mảng
	}

	int t;
	cin >> t; // Nhập số lượng truy vấn

	// Đếm số lần xuất hiện của mỗi phần tử trong mảng và lưu vào mảng mark
	for(int i = 0; i < n; i++){
		mark[v[i]]++;
	}

	// Xử lý t truy vấn
	for(int i = 0; i < t; i++){
		int x; 
		cin >> x; // Nhập giá trị truy vấn

		// Kiểm tra xem giá trị x có xuất hiện trong mảng hay không
		if(mark[x] != 0){
			cout << "YES" << endl; // Nếu giá trị x xuất hiện ít nhất một lần
		}
		else {
			cout << "NO" << endl; // Nếu giá trị x không xuất hiện
		}
	}

	return 0; 
}
