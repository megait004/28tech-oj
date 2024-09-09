#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
ll phi(ll n){
	long long res = n ;
	// vòng for này phân tích thừa số nguyên tố 
	for(long long i = 2 ; i <= sqrt(n) ;i++){
		if(n % i == 0){
			// công thức phi hàm euler
			res = res - res / i ; // res * (1 - 1 / i)
			while(n % i == 0){
				n = n / i;
			}
		}
	}
	if(n > 1 ){
		res = res - res / n;
	}
	return res;
}
int main(){
	long long n ;
	cin >> n ;
	cout << phi(n);
	return 0;
}