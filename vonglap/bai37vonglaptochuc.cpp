#include<iostream>
using namespace std;
int main(){
	int n; cin >> n;
	for(int i = 1 ; i <= n ;i++){ // vẫn có i hàng và i ký tự 
		for(int j = 1 ; j <= n ; j++){
			// kiêm tra điều kiện in số hoặc khoảng trắng 
			if( i == j || j == n - i + 1){ 
//		    Khi i = 1 (hàng đầu tiên), cột tương ứng trên đường chéo phụ là j = n - 1 + 1 = n (cột cuối cùng)
//			Khi i = 2, cột tương ứng là j = n - 2 + 1 = n - 1.
//			Khi i = n, cột tương ứng là j = n - n + 1 = 1 (cột đầu tiên).
				cout << i << " ";
			}
			else 
				cout << " " << " ";
		}
		cout << endl;
	}
}