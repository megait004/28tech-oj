#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long n ;
	cin >> n ;
	int digit = n % 4 ;// chu kỳ lặp lại là 4
	int result = -1; 
	if(digit == 1 ){
		result = 8;
	}
	else if(digit == 2){
		result = 4;
	}
	else if(digit == 3 ){
		result = 2;
	}
	// // có nghĩa là chia lấy dữ cho 4 == 0
	else if(digit == 0 ){
		result = 6;
	}
	cout << result ;
	return 0;
}