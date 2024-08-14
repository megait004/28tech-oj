#include<iostream>
using namespace std;
int main(){// hình thoi kết hợp của tam giác cân bình thường và tam giấc cân ngược 
	int n ; cin >> n; 
 // hang i : 2 * i - 1 sao 
 // duyệt từ hàng i đến hàng n
	for(int i = 1 ; i <= n ; i++){
		for( int j = 1 ; j <= n - i ; j ++){
			cout << " " << " ";
		}
		for(int j = 1 ; j <= 2 * i - 1 ; j++){
			cout << "*" << " ";
		}
		
		cout << endl;
	}
	// duyệt từ hàng n - 1 về hàng i
	for(int i = n-1 ; i >= 1 ; i--){
		for( int j = 1 ; j <= n - i ; j ++){
			cout << " " << " ";
		}
		for(int j = 1 ; j <= 2 * i - 1 ; j++){
			cout << "*" << " ";
		}
		
		cout << endl;
	}
}