#include<iostream>
using namespace std;
int main(){
	int n ; cin >> n ;
	int arr[n];
	for(int i = 0 ; i < n ;i++){
		cin >> arr[i];
	}
	bool check = false; // đặt cờ hiệu tạo 1 biến check bằng false
	for(int i = 0 ; i < n ; i++){
		// Kiểm tra điều kiện ở index thứ i là chẵn nếu mà nó cũng có phần tử là chẵn thì check = true ; 
		if( i % 2 == 0 && arr[i] %  2 == 0  ){
			check = true;
			cout << arr[i] << " ";
		}
		
	}
	// kiểm tra xong điều kiện nếu mà check nó vẫn bằng false thì return "none"
	if(check == false){
		cout << "NONE";
	}

	return 0;
}