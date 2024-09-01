#include<iostream>
#include<cmath>
#define mod 1000000007
// luỹ thừa dãy số S(n) = 1^1 + 2^2 + 3^3 + …. + n^n
using namespace std;
int main(){
	long long n ;cin >> n;
	long long sum = 0 ;
	
	long long tich = 1  ;
	for(long long i = 1 ; i <= n ;i++){
		// khởi tạo lại biến tich bằng 1 để nó không nhân dồn thằng tích lại sau lần lập của thằng i ví dụ i = 2 nó chỉ tính số lần lặp  của thằng 2
		// và không nhân dồn thằng i = 3 
		tich = 1;
		// vòng lặp j này là tính sô j và lặp i lần 
		// ví dụ i = 3 thì : tich = 1 * 3 lăp 1 lần 
		// tich = 3 * 3  lặp lần 2 
		// tich = 3 * 3 * 3 lặp lần 3 
		
		for(long long j = 1 ; j <= i ; j++){
			tich = (tich % mod * i % mod ) % mod;
		}
		 // hết vòng lặp cộng tổng lại 
		sum = sum + tich;
	}
	cout << sum % mod ;
	return 0;
}
