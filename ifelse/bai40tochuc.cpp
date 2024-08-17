#include<iostream>
using namespace std;
int main(){
	int n ; cin >> n;
	long long t;
	if( n >= 1000){
		t = 4500 * n + 1200000;
	}
	else if(n >= 800 && n < 1000){
		t = 3900 * n + 900000;
	}
	else if(n >= 500 && n < 800){
		t = 3700 * n + 800000;
	}
	else{
		t = 3300 * n ;
	}
	cout << t ;
	return 0;
	
	
}