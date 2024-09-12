#include<iostream>
using namespace std;
int main(){
	int n ; cin >> n;
	int arr[n];
	// khởi tạo 2 biến max1 , max2;
	int max1 = -1 , max2 = -1;
	for(int i = 0 ; i < n ;i++){
		cin >> arr[i];
	}
	for(int i = 0 ; i < n ; i++){
		// nếu như phần tử trong mảng mà lớn hơn max1 
		// gán max2 = max1;
		// max1 = arr[i]
		if(arr[i] > max1){
			max2 = max1;
			max1 = arr[i];
		}
		// trường hợp 2 nếu mà còn phần tử trong mảng mà lớn hơn arr[i] thì cập nhật max2 = arr[i]
		else if(arr[i] > max2){
			max2 = arr[i];
		}
	}
	cout << max1 << " " << max2;
	return 0;
}