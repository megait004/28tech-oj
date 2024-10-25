#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n, m, k;
	cin >> n >> m >> k;  // Nhập số người đăng ký, số căn hộ và mức chênh lệch diện tích tối đa cho phép

	vector<int> v1(n); // Mảng chứa diện tích căn hộ mong muốn của từng người đăng ký
	vector<int> v2(m); // Mảng chứa diện tích từng căn hộ

	// Nhập diện tích mong muốn của người đăng ký
	for(int i = 0; i < n; i++){
		cin >> v1[i];
	}

	// Nhập diện tích thực tế của từng căn hộ
	for(int i = 0; i < m; i++){
		cin >> v2[i];
	}

	// Sắp xếp diện tích mong muốn của người đăng ký và diện tích căn hộ theo thứ tự tăng dần
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	int i = 0; // Con trỏ cho danh sách diện tích mong muốn
	int j = 0; // Con trỏ cho danh sách diện tích căn hộ
	int dem = 0; // Biến đếm số người có thể nhận được căn hộ

	// Duyệt qua danh sách diện tích mong muốn và diện tích căn hộ
	while(i < n && j < m){
		// Nếu chênh lệch giữa diện tích mong muốn và diện tích căn hộ nằm trong khoảng cho phép
		if(abs(v1[i] - v2[j]) <= k){
			dem++;  // Người này có thể nhận căn hộ
			i++;    // Chuyển sang người tiếp theo
			j++;    // Chuyển sang căn hộ tiếp theo
		}
		else if(v1[i] > v2[j]){
			// Nếu diện tích mong muốn của người lớn hơn diện tích căn hộ, chuyển sang căn hộ lớn hơn
			j++;
		}
		else {
			// Ngược lại, chuyển sang người có diện tích mong muốn lớn hơn
			i++;
		}
	}

	cout << dem; 
	return 0;
}
