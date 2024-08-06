#include<iostream>
using namespace std ;
int main(){
	long long n , s ;
	// n là mệnh giá đồng tiền
	// s là tổng số tiền có 
	cin >> n >> s;
	long long sl;
	if(s % n ==0 ){ // nếu mà tổng số tiền có chia hết cho mệnh giá tiền thì đó là số tiền tối thiểu đổi được 
		sl = s / n ;
		cout << sl;
	}
	else if( s % n != 0){ /*
		-> nếu mà tổng số tiền không chia hết cho 
		mệnh giá tiền thì ta vấn chia nguyên cho mệnh giá tiền đó 
		và cộng thêm số đồng dư còn lại là cộng thêm 1	
	*/
		sl = s / n + 1;
		cout << sl;
	}
	return 0;
}