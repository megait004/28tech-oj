#include<iostream>
using namespace std;
int sum_digit(long long n);
int sum_digit(long long n){
	long long sum ;
	sum = 0 ;
	for(long long i = 0 ; n > i ; (n= n/10)){ // khi nào n còn lơn hơn 0 thì tiếp tục chia nguyên cho 10 đến khi n =0 thì dừng
		sum = sum + (n % 10);
	}
	return sum ;
}
int main(){
	long long a ;
	cin >> a ;
	sum_digit(a);
	cout << sum_digit(a);
	return 0;
}
