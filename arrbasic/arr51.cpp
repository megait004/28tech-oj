#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n ; cin >> n ;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i ++){
		cin >> v[i];
	}
	// Duyệt mảng từ trái qua phải
	for(int i = 0 ; i < n ; i++){
		cout << v[i] << " ";
	}
	cout << endl;
	// Duyệt mảng từ phải qua trái 
	for(int i = n - 1  ; i >= 0 ; i--){
		cout << v[i] << " ";
	}
	cout << endl;
	// Duyệt phần tử ở chỉ số chăn 
	for(int i = 0 ; i < n ; i++){
		if(i % 2 == 0){
			cout << v[i] << " ";
		}
	}
	cout << endl;
	// Duyệt những phần tử ở chỉ số lẻ 
	for(int i = 0 ; i < n ; i ++){
		if(i % 2 == 1){
			cout << v[i] << " ";
		}
	}
	cout << endl;
	// Tính tổng của N - 1 cặp đứng cạnh nhau
	int sum = 0;
	// Lưu ý là duyệt đến n - 1 thôi vì để tránh bị truy xuất vào phần tử không hợp lệ
	for(int i = 0 ; i < n - 1 ;i++){
		sum = sum + v[i] + v[i + 1];
		cout << sum << " ";
		sum = 0 ;
	}
	return 0; 

}