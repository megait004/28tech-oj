#include<iostream>
using namespace std;

// f(n) = - 1 + 2 - 3 + .. + (- 1)^n * n
// nếu n chăn thì có n / 2 cặp số , nếu n lẻ thì có (n - 1  / 2 ) - n , cặp số
int main(){
	long long n ; 
	cin >> n ;
	long long cap;
	if(n % 2 == 0 ){
		cap = n / 2 ;
		cout << cap;
	}
	else if(n % 2 == 1){
		n = n + 1;
		cap = (-1) * (n / 2);
		cout << cap;
	}
	return 0;
}