#include<iostream>
using namespace std;
int main(){
	long long n;
	cin >> n;
	int dv;// biến tách chữ số
	int demc = 0; // đếm số lượng chữ số chăn
	int deml = 0; // đếm số lượng chữ số lẻ
	for(int i = 0 ;i < n ;n = n /10){
		dv = n % 10;
		if( dv % 2 ==0){
			demc= demc + 1;
		}
		else if(dv % 2 != 0){
			deml = deml + 1;
		}
	}
	if(deml == 0 ){ // kiểm tra nếu mà số lượng chữ số lẻ bằng không thì sẽ là toàn chữ số chẵn in ra 28tech
		cout << "28tech";
	}
	else{
		cout << "29tech";
	}
	
}
