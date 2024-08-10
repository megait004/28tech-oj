#include<iostream>
using namespace std;
int main(){
	long long n;
	cin >> n;
	int dv;
	int demc = 0;
	int deml = 0;
	if(n == 0){ // giống bài kiểm tra số lẻ nhưng đặc biển kiểm tra riêng số 0 vì số 0 là số chẵn 
		cout << "29tech";
		return 0;
	}
	for(int i = 0 ;i < n ;n = n /10){
		dv = n % 10;
		if( dv % 2 ==0){
			demc= demc + 1;
		}
		else if(dv % 2 != 0){
			deml = deml + 1;
		}
	}
	if(demc == 0 ){
		cout << "28tech";
	}
	else{
		cout << "29tech";
	}
	
}
