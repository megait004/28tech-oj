#include<iostream>
using namespace std;
int main(){
	int n ; 
	cin >> n ;
	int x = 1 ;
	// số yêu thích của 28tech là số 28 nên khi ta tính x ^ n thì lặp qua n vòng lạp
	// rồi lấy x nhân cho 28 
	
	for(int i = 1 ; i <= n ; i++){
		x = x * 28;
		// nếu mà số đó chia hết cho 28 thì lấy số đó chia dư tiếp cho 100
		if( x % 28 == 0){
			x = x % 100;
		}
	}
	cout << x ;
	return 0;
}