#include<iostream>
#define mod 1000000007
using namespace std;
int main(){
/*Dãy số 23 được định nghĩa như sau :

F(1) = 1, F(2) = 1, Fn = 2 * F(n - 1) + 3 * F(n - 2).

Một số đầu tiên trong dãy 23 : 1, 1, 5, 13, 41....

Hãy tính số thứ n trong dãy số 23 chia dư cho 10^9 + 7.*/
	long long  n ; cin >> n;
	long long  f1 = 1 ;
	long long  f2 = 1;
	long long  fi ;
	// vòng for duyệt từ 1 đến n ;
	for(long long  i = 1 ; i <= n ; i++){
		// nếu như mà i = 1  || i = 2  thì fi = f1 
		if(i == 1 || i == 2 ){
			fi = f1 % mod;
		}
		else{
			// nếu như mà i > 3 thì :
			fi = (2 * (f2 % mod)) % mod + (3 * (f1 % mod)) % mod;
			// hoán đổi vị trí f1 thành f2 và f2 thành fi để tính  tiếp các giá trị 'i' phía sau 
			f1 = f2;
			f2 = fi;
		}
	}
	cout << fi % mod;
	return 0;
}