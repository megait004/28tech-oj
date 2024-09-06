#include<iostream>
#include<cmath>
using namespace std;
// hàm kiểm tra nguyên tố 
bool isPrime(long long n){
	if(n < 2 ) return false;
	for(long long i = 2 ; i <= sqrt(n);i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
// hàm check số hoàn hảo 
bool isPerfect(long long n){
	for(int p = 1 ; p <= 33; p++){
		if(isPrime(p)){
			long long tmp1 = pow(2,p) - 1 ;
			
			if(isPrime(tmp1)){
				
				long long tmp2 = pow(2,p - 1 );
				
				if(tmp1 * tmp2 == n){
					
					return true;
				}
			}
		}
	}
	return false;
}
int main(){
	long long n ; cin >> n ;
	if(isPerfect(n)){
		cout << "YES";
	}
	else
		cout << "NO";
	
	return 0;
	
}