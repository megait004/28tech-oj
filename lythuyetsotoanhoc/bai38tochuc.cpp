#include<iostream>
#include<cmath>
#define mod 1000000007
using namespace std;
int isPrime(int n ){
	if(n < 2){
		return false;
	}
	for(int i = 2 ; i <= sqrt(n) ;i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
// ham legendre tim bac cua tsnt trong n!
int legendre(int n , int p){
	int result = 0 ;
	for(int i = p ; i <= n ; i = i * p){
		result = result % mod + n / i;
		result %= mod;
	}	
	return result;
}
int main(){
	long long n ; cin >> n;
	long long result = 1 ;
	for(int i = 2 ; i <= n ; i++){
		if(isPrime(i)){
			// tim so mu cua nto i trong phan tich n!
			int somu = legendre(n,i);
			// (k1 + 1 ) * ( k2 + 1 ) * ( k3 + 1 ) * ... ( km + 1);
			result = result * (somu + 1);
			result %= mod;
		}
	}
	cout << result ;
}