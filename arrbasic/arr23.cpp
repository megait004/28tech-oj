#include<iostream>
using namespace std;
// Mảng cộng dồn 
int main(){
	int n; cin >> n ;
	// khai báo mảng để lưu giá trị cộng dồng có kích thước cùng mảng arr
	int F[n];
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	// Giá trị mảng đầu tiền của mảng cộng dồn là giá trị đầu tiên của mảng arr
	F[0] = arr[0];
	// duyệt mảng từ vị trí thứ 1
	for(int i = 1 ; i < n ; i++){
		// phần tử thứ i trong mảng F
		F[i] = F[i - 1] + arr[i];	
		
	}
	for(int i : F){
		cout << i << " ";
	}
	return 0;
}