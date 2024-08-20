#include<iostream>
#include<cmath>
using namespace std;
// hàm kiểm tra số nguyên tố duyệt từ 2 đến căn của n sẽ không bị tràn 
// nếu trong đoạn từ 2 đến căn n có số nào mà chia hết cho i == 0 thì đó không phải là số nguyên tô
// ngược lại thì là số nguyên tố 
bool isPrime(int n ){
	if(n < 2 ){
		return false;
		return 0;
	}
	for(int  i = 2 ; i < sqrt(n) ; i++){
		if(n % i == 0){
			return false ;
		}
	}
	return true;
}
int main(){
	int n ; cin >> n;
	if(isPrime(n)){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}