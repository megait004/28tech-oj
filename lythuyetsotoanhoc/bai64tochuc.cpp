#include<iostream>
using namespace std;
bool fibo(long long n){
	// khơi tạo mảng để lưu số fibo thứ i ;
	long long F[100];
	// 2 số fibo đầu tiên đã biết
	F[0] = 0;
	F[1] = 1;
	// duyệt for từ số fibo co chỉ sô i là 2 đến nhở hơn 92
	for(long long i = 2 ; i <= 92 ; i++){
		F[i] = F[i - 1 ] + F[i - 2];
	}
	// kiểm tra từ chỉ số đầu tiên nếu nó là số fibo trả về true
	for(long long i = 0 ; i <= 92 ; i++){
		if(n == F[i]){
			return true;;
		}
	}
	return false;
}
int main(){
	long long n ;cin >> n;
	if(fibo(n)){
		cout << "YES";
	}
	else
		cout << "NO";
	return 0;
}