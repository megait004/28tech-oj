#include<iostream>
using namespace std;
int main(){
	int n ; cin >> n ;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	for(int i = 0 ; i < n ; i++){
		bool check = true;
		// vòng lặp thứ 2 này duyệt để không lấy ra hai giá trị giống nhau
		for(int j = 0 ; j < i ; j ++){
			if(arr[i] == arr[j]){
				check = false;
				break;
			}
		}
		if(check){
		int dem = 1 ;
		// vòng lặp kiểm tra các số đằng sau vị trí i đó còn số nào giống thì tăng biến đếm
		for(int j = i + 1 ; j < n ;j ++){
			if(arr[i] == arr[j]){
				dem++;
			}
		}
		cout << arr[i] << " " << dem << endl;
	}
	}
	
}