#include <iostream>

using namespace std;
#define mod 1000000007
#define ll long long

ll binpow(ll a, ll n){
	ll res = 1;
	a = a % mod;
	while(n != 0){
		//Neu bit cuoi cung cua n la bit 1 
		if(n % 2 == 1){
			res *= a;
			res = res % mod;
		}
		//Dich bit 
		n /= 2;
		//Nhan a voi a
		a = (a % mod * a % mod) % mod ;
	}
	return res;
}

int main(){
	long long a , n ;
	cin >> a >> n;
	cout << binpow(a,n) % mod;
	return 0;
}