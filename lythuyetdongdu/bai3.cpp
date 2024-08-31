#include<iostream>
#define mod 1000000007
using namespace std;
int main(){
	long long n ;cin >> n ;
	long long gt;
	gt = 1 ; 
	for(long long  i = 1 ; i <= n ;i++){
		gt = ((gt % mod) * (i % mod)) % mod;
		cout << gt << endl;
	}
	return 0;
}