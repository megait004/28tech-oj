#include<iostream>
using namespace std;
int main(){
	int n ; cin >> n ;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	 // so dau tien va so cuoi cung trong mang
	cout << arr[0] << " " << arr[n - 1];
	cout << endl;
	// số thứ 2 và số thứ 2 từ cuối về trong mảng
	cout << arr[1] << " " << arr[n - 2];
	cout << endl;
	int dem = 0;
	for(int i = 0 ; i < n ; i++){
		dem++;
	}
		if(dem % 2 == 0){
			cout << "28tech";
	} // in ra phần tử ở giữa khi số lượng phần tử trong mảng là số lẻ
		else{
			cout << arr[(n - 1 -  0 + 1) / 2]; //  thì ta sẽ lấy giá trị index cuối cùng là n - 1 trừ cho giá trị index đầu tiên là bằng 0 xong rồi cộng cho 1 rồi tất cả chia 2
		}
	return 0;
	
}