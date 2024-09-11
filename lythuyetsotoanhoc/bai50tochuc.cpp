#include<iostream>
using namespace std;
long long nCk (long long n , long long k){
	long long result = 1;
	// tách công thức tổ hợp
	for(int i = 1 ; i <= k ; i++){
		result = result * (n - k + i);
		result = result / i;	
	}
	return result;
}
int main(){
	long long n ; cin >> n;
	for(int i = 0 ;  i < n ; i++){
		for(int j = 0 ; j <= i ; j++){
			cout << nCk(i , j) << " ";
		}
		cout << endl;
	}
	return 0;
}