#include<iostream>
#define mod 1000000007
using namespace std;
int main(){
	long long n ; cin >> n;
	long long arr[n];
	long long sum = 0 ;
	for(long long i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	for(long long i = 0 ; i < n ; i++){
		sum = ((sum % mod) + (arr[i] % mod)) % mod;
	}
	cout << sum ;
	return 0;
	
}