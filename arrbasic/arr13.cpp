#include<iostream>
#define mod 1000000007
using namespace std;
int main(){
	long long n ;
	cin >> n;
	long long arr[n];
	long long sum = 0;
	long long tich = 1;
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	for(long long i = 0 ; i < n ; i++){
		sum = (sum + arr[i]) % mod;
		tich = tich % mod * arr[i] % mod ;
	}
	cout << sum << endl;
	cout << tich ;
	return 0;
}