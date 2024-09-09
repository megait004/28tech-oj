#include<iostream>
#include<cmath>
using namespace std;
int F[100];
// hàm kiểm tra nguyên tố 
bool isPrime(int n){
	if(n < 2 ) return false;
	for(int i = 2 ; i <= sqrt(n) ;i++){
		if( n % i == 0 ){
			return false;
		}
	}
	return true;
}
// hàm tính tổng các chữ số nguyên tố 
int sumdigit(int n){
	int digit;
	int sum = 0;
	if(isPrime(n)){
		while(n != 0){
			digit = n % 10;
			sum = sum + digit;
			n = n / 10;
		}
	}
	return sum;
}
// hàm tính số fibo và kiểm tra xem tổng số nguyên tố của phải là số fibo hay không
bool fibo(int n){
	F[0] = 0; 
	F[1] = 1;
	for(int i = 2 ; i <= 92 ;i++){
		F[i] = F[i - 1 ] + F[i - 2];
	}
	for(int i = 0 ; i <= 92 ; i++){
		if(sumdigit(n) == F[i]){
			return true;
		}
	}
	return false;
}
int main(){
	int n; 
	cin >> n ;
	for(int i = 1 ; i <= n ; i ++){
		if(fibo(i) && sumdigit(i)){
			cout << i << " ";
		}
	}
	return 0;
}





