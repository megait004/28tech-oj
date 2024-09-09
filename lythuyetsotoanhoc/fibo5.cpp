#include<iostream>
using namespace std;
long long  F[100];
// hàm sinh số fibo từ 0 đến 100;
bool fibo(long long n ){
	F[0] = 0 ;
	F[1] = 1 ;
	for(int i = 2 ; i <= 92; i++ ){
		F[i] = F[i-1] + F[i-2];
		
	} 
	for(int i = 0 ; i <= 92 ; i++){
		if(n == F[i]){
			return true;
		}
	}
	return false;
}
int main(){
	int t ; cin >> t ;
	int n;
	// mỗi lần duyệt là 1 test case 
	for(int i = 1 ; i <= t ; i++){
		cin >> n;
		// kiểm tra số fibo
		if(fibo(n)){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}