#include<iostream>
using namespace std;
bool isTrue(long long n){
	long long b = n % 11 ;
	long long a = (n - 111 * b );
	if(a >= 0 && a % 11 == 0){
		return true;
	}
	return false;
}
int main(){
	/* N = 11a + 111b = 11a + (11 * 10 + 1)b;
		 = 11a + (110b + b)
		 = 11(a+ 10b) + b
		 đặt x = a + 10b;
		 => N = 11x  +b ;
		 b chạy [0 - 10 ]
		 => b = n % 11;
		 thay b lên biểu thức đầu ta có 
		 a = (n - 111b) / 11;
		 mà a và b phải nguyên nên a = ( n - 111b) % 11;
	*/
	long long n ;cin >> n ;
	if(isTrue(n)){
		cout << "YES";
	}
	else
		cout << "NO";
	return 0;
}