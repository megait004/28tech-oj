#include <iostream>

using namespace std;

#define ll long long

ll binpow(ll a, ll n, ll c){
	ll res = 1;
	a %= c;
	while(n != 0){
		//Neu bit cuoi cung cua n la bit 1 
		if(n % 2 == 1){
			res *= (a % c);
			res %= c;
		}
		//Dich phai 1 bit 
		n /= 2;
		//Nhan a voi a
		a *= (a % c);
		a %= c;
	}
	return res;
}

int main(){
	long long a , b , c;
	c = 1000000007;
	cin >> a >> b ;
	cout << binpow(a, b, c) << endl;
	return 0;
}