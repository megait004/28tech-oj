#include<bits/stdc++.h>
using namespace std;
long long  demSo(long long  n ){
	long long  dem = 0 ;
	if(n >= 0 && n <= 9 ){
		return 1;
	}
	else {
		while(n != 0 ){
			dem = dem + 1 ;
			n = n / 10;
		}
	}
	return (dem - 1 ) + demSo( n / 10);
}
int main(){
	long long  n ; cin >> n ;
	cout << demSo(n);
	return 0;
}