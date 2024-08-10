#include<iostream>
using namespace std;
int main(){
	long long n;
	cin >> n;
	int dv;
	long long sum = 0;
	if(n < 0 ){
		cout << "NEGATIVE" ; // nếu n là số âm thì in ra negative
	}
	else if(n >= 0) {
		for(int i = 0 ; i < n ; n = n /10){ 
			dv = n % 10;//tách chữ số 
			if(dv % 2 == 0){ // kiểm tra xem chữ số đó có phải chăn không
				sum = sum + dv;
			}	
		}
			cout << sum ;
	}

	return 0;
}
