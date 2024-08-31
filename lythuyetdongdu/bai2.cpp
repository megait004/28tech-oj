#include<iostream>
#define mod 1000000007
using namespace std;
int main(){
	long long n;cin >> n;
	long long arr[n];
	for(long long i = 0 ; i < n ;i++){
		cin >> arr[i];
	}
	long long tich = 1 ;
	for(long long i : arr){
		tich = ((tich % mod) * (i % mod)) % mod  ;
	}
	cout << tich;
	return 0;
}