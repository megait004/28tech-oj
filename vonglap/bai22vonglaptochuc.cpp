#include<iostream>
using namespace std;
int main(){
	int n ;
	cin >> n;
	// chú ý hàng for đầu tiên luoon luôn là hàng 
	// for thứ 2 là cột j có nghĩa là số * tương ứng của mỗi cột có thể tuỳ vào mỗi hình có điều khiển khác nhau
	// hinh 1
	for(int i = 1 ; i <= n ;i++){
		for(int j = 1 ; j <= i ;j++){ // j tang dan tu 1 ve i 
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	// hinh 2
	for(int i = 1 ; i <= n ;i++){
		for(int j = n ; j >= i ; j--){ // giảm dẩn từ n về i hàng thứ i có i ký tự 
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	// hinh 3 hàng thứ i có i ký tự nhưng có n -i khoảng trắng
	for(int i=1; i <= n ; i++){
		for(int j = 1 ; j<=n - i;j++){
			cout << " ";
		}
		for(int j = 1 ; j <= i ;j++){
			cout << "*";
		}
		cout << endl;
	}
	
	
	
	cout << endl;
	// hinh 4
	for(int i = 1 ; i <= n ;i++){
		for(int j =1  ; j<= n ;j++){
			if(i <= j){  // duyệt nếu mà thằng i nhỏ hơn j mới in * duyệt ra nháp sẽ hiểu
				cout << "*";
			}
			else{
				cout << " ";
			}
			
		}
		cout << endl;
	}
	
	
	// hinh 5
	for(int i = 1 ;i <= n ; i++){
		for(int j =1 ; j <= i ;j++){
			if(i == n || j == 1){
				cout << "*";
			}
			else if(i == j){
				cout <<"*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

}