#include<iostream>
using namespace std;
int main(){
	int n ;
	cin >> n;
	long long sum = 0;
	for(int i = 0 ; i <= n;i++ ){
		sum =sum + i ; // tính tổng từ 0 đến n 
		
	}
	int ngto; 
	ngto = sum % 10 ; // chia lấy dư để lấy phần đơn vị của tổng n 
	if(ngto == 2 ||ngto==3|| ngto == 5 || ngto ==7){ // đây là các số nguyên tố < 9
		cout << "28tech";
	}
	else
		cout << "29tech";
	return 0;
}
