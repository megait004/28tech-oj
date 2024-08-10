#include<iostream>
using namespace std ;
int main(){
 	long long n;
	cin >> n ;
	long long chuc;
	long long donvi;
	donvi= n % 10 ; // chia dư để lấy hàng đơn vị so sánh
	
	chuc = n / 10 ; // chia lấy nguyên đề lấy hàng chục so sánh
	
	if(donvi % 2 == 0 && chuc % 2 == 0){
		cout << "28tech";
	}
	else if(donvi % 2 != 0 && chuc % 2 != 0){
		cout << "28tech";
	}
	else 
		cout << "29tech";
	return 0;
}
