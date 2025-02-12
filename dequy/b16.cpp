#include<bits/stdc++.h>
using namespace std;
long long digitMin(long long n){
	long long soMin = 1000000000;
	while(n != 0){
		long long digit = n % 10 ;
		if(digit < soMin){
			soMin = digit;
		}
		n = n / 10;
	}
	return soMin;
}

long long digitMax(long long n){
	long long soMax = -1000000000;
	while(n != 0){
		long long digit = n % 10 ;
		if(digit > soMax){
			soMax = digit;
		}
		n = n / 10;
	}
	return soMax;
}
int  main(){
	long long n ; cin >> n ;
	cout << digitMax(n) << " " << digitMin(n);
	return 0;
}