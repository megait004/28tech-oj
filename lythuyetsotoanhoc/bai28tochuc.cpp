#include<iostream>
using namespace std;
bool soLocPhat(long long n){
	int digit;
	while(n != 0){
		digit = n % 10;
		// tách xong kiểm tra từng số luôn 
		if(digit != 0 && digit != 6 && digit != 8){
			return false;
		}
		n = n / 10;
	}
	return true;
}
int main(){
	long long n ;
	cin >> n ;
	
	if(soLocPhat(n)){
		cout << "1";
	}
	else 
		cout << "0";
}