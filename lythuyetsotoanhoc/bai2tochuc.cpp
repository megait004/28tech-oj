#include<iostream>
#include<cmath>
using namespace std;
// hàm kiểm tra số nguyên tố duyệt từ 2 đến căn của n sẽ không bị tràn 
// nếu trong đoạn từ 2 đến căn n có số nào mà chia hết cho i == 0 thì đó không phải là số nguyên tô
// ngược lại thì là số nguyên tố 
int  isPrime(int n ){
	if(n < 2 ){
		return 0;
	}
	for(int  i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0){
			return 0 ;
		}
	}
	return n >= 2;
}
int main(){
	int n ; cin >> n;
	// bên trên tạo hàm để kiểm tra nguyên tố 
	// duyệt từ 0 đến n nếu có số nào là thoả mãn hàm trên thì in ra
	for(int i = 1 ; i <= n ; i++){
		if(isPrime(i)){
			cout << i << " ";
		}
	}
	return 0;
}