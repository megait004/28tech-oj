#include<iostream>
#define mod 1000000007
using namespace std;
// Khi tính N!, số lượng số 0 liên tiếp ở cuối kết quả sẽ tương ứng với số lần mà N! có thể chia hết cho 10.
// Do 10 = 2 × 5, mỗi cặp (2, 5) trong các thừa số nguyên tố của N! sẽ tạo ra một số 10, và từ đó tạo ra một số 0 ở cuối.
// Trong các số từ 1 đến N, số 2 xuất hiện nhiều hơn số 5, 
//vì vậy số lượng số 0 ở cuối của N! sẽ phụ thuộc vào số lần xuất hiện của số 5 trong các thừa số nguyên tố của N!.
// Ta cần đi tìm số lần số 5 xuất hiện trong n! áp dung công thúc legendry để đếm sô lần xuất hiện của p trong N!
long long bac(long long  n , long long  p ){
	long long res = 0 ; 
	for(long long  i = p ; i <= n ; i *= p){
			res = res + n / i ;
			res = res % mod;
	}
	return res;
}
int main(){
	long long n ;cin >> n ;
	cout << bac(n,5) % mod;
	return 0;
}