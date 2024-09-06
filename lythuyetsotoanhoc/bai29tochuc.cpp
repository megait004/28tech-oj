#include<iostream>
using namespace std;
// hàm kiểm tra số thuận nghịch
int tn(int n){
	int lat = 0;
	int m = n;
	while(n != 0){
		lat = lat * 10 + n % 10;
		n = n / 10;
	}
	return lat == m;
}
// hàm kiểm tra số đó có 1 chữ số 6 
int chuSo6(int n ){
	int digit;
	int count = 0;
	while(n != 0){
		digit = n % 10;
		if(digit == 6){
			count++;
		}
		n = n / 10;
	}
	if(count >= 1){
		return 1;
	}
	return 0;
}
// hàm kiểm tra tổng các chữ số của số đó, mà nó có 1 chữ số cuối cùng là 8
int sum8(int n){
	int digit ;
	int sum = 0;
	while(n != 0){
		digit = n % 10;
		sum = sum + digit;
		n = n / 10;
	}
	if( sum % 10 == 8 ){
		return 1;
	}
	return 0;
}
int main(){
	int a , b ;
	cin >> a >> b ;
	for(int i = a ; i <= b ; i++){
		if(tn(i) && chuSo6(i) && sum8(i)){
			cout << i << " ";
		}
	}
	return 0;
}
