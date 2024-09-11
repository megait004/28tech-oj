#include<iostream>
using namespace std;
// hàm tìm ước chung lớn nhất tối ưu
int gcd(int a , int b ){
	while(b != 0 ){
		int r = a % b ;
		a = b ; 
		b = r ;
	}
	return a ;
}
int main(){
	int n ; cin >> n ; 
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	// khởi tạo 1 biến lưu giá trị đầu của mảng 
	int uc = arr[0];
	// duyệt for để tìm ước chung lớn nhất của số đó với từng phần tử trong mảng
	for(int i = 0 ; i < n ; i++){
		uc = gcd(uc,arr[i]);
	}
	cout << uc;
	
}