#include<iostream>
#include<cmath>
using namespace std;
long long  tongUoc(long long n){
	long long sum = 0;
	for(long long i =1 ;i <= sqrt(n); i++){
		if(n % i ==0){
			sum  = sum + i ; // uoc thu 1 
				if(i != n /i){
					sum = sum + n / i;  // các ước còn lại nếu mà nó khác ước thứ 1
			}
		}
		
	}
	return sum ;
}
int main(){
	long long n;
	cin >> n;
	cout << tongUoc(n);
	return 0;
}