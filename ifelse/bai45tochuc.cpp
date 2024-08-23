#include<iostream>
using namespace std;
int main(){
	long long n ;cin >> n;
	while(n >= 10){
		long long sum = 0 ;
		while(n > 0){
			sum = sum + n % 10;
			n = n / 10;
		}
		n = sum; // gán lại sum bằng n để kiểm tra tiếp cho vòng while đầu tiên nếu sum còn lơn hơn bằng 10
	}
	cout << n ;
	return 0;
}