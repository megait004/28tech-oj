#include<bits/stdc++.h>
using namespace std;
int  check(long long n){
	if(n < 10){
		if(n % 2 == 0 ) return 1;
		 return 0 ;
	}
	if( n % 2 == 0)
		return check(n / 10);
	return 0;
}
int main(){
	long long n ; cin >> n ;
	if(check(n)) cout << "YES";
	else cout << "NO";
	return 0 ;
}