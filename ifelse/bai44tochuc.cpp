#include<iostream>
using namespace std;
int main(){
	int n ; cin >> n;
	// tong 1  - n
	long long sum = 0;
	for(int i = 1 ; i <= n; i++){
		sum += i;
	}
	cout << sum << endl;
	long long sum2 = 0;
	for(int i = 1 ; i <= n ;i++){
		sum2 = sum2 + (long long)i * i;
	}
	cout << sum2 << endl;
	long long sl = 0;
	for(int i = 1 ; i <= n ; i++){
		if(i % 3 == 0){
			sl++;
		}
	}
	cout << sl << endl;
	long long sum3 = 0;
	for(int i =1 ; i <= n ; i++){
		if(i % 3 ==0){
			sum3 += i;
		}
	}
	cout << sum3;
	return 0;
}