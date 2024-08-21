#include<iostream>
#include<cmath>
using namespace std;
bool nt(int n ){
	for(int i = 2 ; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return n >=2;
}
int main(){
	// bài này ta biết là tổng n là p + q , p phải là một số nguyên tố q cũng phải là 1 số nguyên tố
	// suy ra q= n - q là 1 số nguyên tố 
	long long t; cin >> t;
	for(int i = 1 ; i <= t ; i++){
		long long n ; 
		cin >> n;
		for(int p = 2 ; p <= n / 2; p++){ // duyệt đến n / 2 để tránh bị lặp lại cặp số trước đó 
			if(nt(p) && nt(n-p)){
				cout << p << " " << n - p << endl;
			}
			
		}
	}
	return 0;
}
