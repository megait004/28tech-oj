#include<iostream>
#include<cmath>
using namespace std;
// tạo 1 hàm kiểm tra nguyên tố 
bool nto(long long n){
	if( n < 2) return false;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	long long n ;
	cin >> n;
	// Số có 3 ước là số có dạng p^2 trong đó p
	// là số nguyên tố, bây giờ bạn cần liệt kê các số p <= √N. Khi đó bạn chỉ cần liệt kê các số nguyên tố từ 1 tới
	//√N rồi in ra dạng bình phương của nó là được.
	for(long long i = 1 ; i <= sqrt(n);i++ ){
		if(nto(i)){
			cout << i * i << " ";
		}
	}
	return 0;
}