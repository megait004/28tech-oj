#include<iostream>
using namespace std;
int main(){
	long long n ; cin >> n;
	long long sum = 0;
	int t;
	for(int i = 1; i <= n ;i++){
		cin >> t;
		if(t % 2 == 0){
			sum = sum +t;
		}
	}
	cout << sum ;
	return 0;
}