#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// kiem tra so chinh phuong su dung ham sqrt khai can
	// neu nhu can * can == n co nghia la ph?n du khi tinh can la 0 thi nhan l?i s? la s? chinh phuong
	// con n?u khai can co ph?n l? d?ng sau nhan l?i khong b?ng s? n thi khong ph?i s? chinh phuong
	long long  n ;
	cin >> n;
	long long can = sqrt(n);
	if((long long)can * can == n){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	
	return 0;
}
