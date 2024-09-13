#include<iostream>
using namespace std;
int main(){
	int n ; cin >> n;
	long long  arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	// điều kiện để trái dấu a. b < 0 ;
	for(int i = 0 ; i < n ; i++){
		// kiểm tra với phần tử đầu
		if(i == 0){
			if(arr[0] * arr[1] < 0 ){
				cout << arr[0] << " ";
			}
		}
		// kiểm tra phần tử cuối
		else if(i == n - 1){
			if(arr[n-1] * arr[n - 2] < 0){
				cout << arr[n -1];
			}
		}
		// công thức suy ra từ a.b < 0
		else if(arr[i] * arr[i + 1 ] < 0 || arr[i] * arr[i-1] < 0){
			cout << arr[i] << " ";
		}
		
	}
	return 0;
}