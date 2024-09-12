#include<iostream>
#include<cmath>
using namespace std;
// hàm kiểm tra số nguyên tố 
bool isPrime(int n){
	if(n < 2) return false;
	for(int i = 2 ; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
// hàm kiểm tra số thuận nghịch 
bool tn (int n ){
	int lat = 0 ; 
	int m = n ;
	while(n != 0 ){
		lat = lat * 10 + n % 10;
		n = n / 10;
	}
	if( lat == m ){
		return true;
	}
	return false;
}
// hàm kiểm tra số chính phương 
bool chinhphuong(int n ){
	int can = sqrt(n);
	if( can * can == n){
		return true;
	}
	return false;
}
// hàm kiểm tra tổng các chữ số trong số n là số nguyên tố
bool sumnt(int n){
	int digit;
	int sum = 0 ;
	while(n != 0 ){
		digit = n % 10;
		sum = sum + digit;
		n = n / 10;
	}
	if(isPrime(sum)){
		return true;
	}
	return false;
}

int main(){
	int n ; cin >> n ;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	// Số lượng số nguyên tố trong dãy
	int dem1 = 0;
	for(int i = 0 ; i < n ;i++){
		if(isPrime(arr[i])){
			dem1++;
		}
	}
	cout << dem1 << endl;

	// Số lượng số thuận nghịch trong dãy
	int dem2 = 0;
	for(int i = 0 ; i < n ; i++){
		if(tn(arr[i])){
			dem2++;
		}
	}
	cout << dem2 << endl;

	// Số lượng số thuận nghịch trong dãy
	int dem3 = 0 ;
	for(int i = 0 ; i < n ; i++){
		if(chinhphuong(arr[i])){
			dem3++;
		}
	}
	cout << dem3 << endl;

	// Số lượng số có tổng chữ số của nó là số nguyên tố.
	int dem4 = 0 ;
	for(int i = 0 ; i < n ; i++){
		if(sumnt(arr[i])){
			dem4++;
		}
	}
	cout << dem4;
	return 0;
}