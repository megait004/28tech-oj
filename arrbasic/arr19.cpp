#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	// cách 1 duyệt ngược lại từ chỉ số n - 1 về chỉ số 0 ;
	int n ; 
	cin >> n ;
	int arr[n];
	for(int i = 0 ; i < n ; i ++){
		cin >> arr[i];
	}
	for(int i = n - 1 ;  i >= 0 ; i--){
		cout << arr[i] << " ";
	}
	return 0;
}
// cách 2 dùng hàm nghịch đảo reverse(arr, arr + n );