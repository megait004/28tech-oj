#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n ; cin >> n ;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	//dùng hàm sort để sắp xếp cả mảng 
	sort(arr, arr + n );
	// tạo một biến min có giá trị lớn
	int minValue = 10000;
	// duyệt từ 0 đến < n - 1 để tránh bị truy xuất vào giá trị không hợp lệ
	for(int i = 0 ; i < n -1 ; i++){
		// tạo 1 biến để lưu hiệu của giá trị sau và trước 
		int t = arr[i + 1] - arr[i];
		// so sánh với biến minValue
		if(t < minValue){
			minValue = t ;
		}
	}
	cout << minValue;
	return 0;
}