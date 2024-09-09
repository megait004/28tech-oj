#include<iostream>
using namespace std;
// Tạo mảng đủ lớn để tính số fibo
long long F[10000005];
void fibo(long long n){
	// 2 số fibo đầu tiên cho trước 
	if(n == 1) cout << 1;
	if(n == 2) cout << 1;
	F[1] = 1 ;
	F[2] = 1 ;
	// vòng lặp để tính số fibo tiếp theo
	for(long long i = 3 ; i <= n ;i++){
		F[i] = F[i-1] + F[i-2];
		// lệnh if để check xem khi mà số fibo thứ i >= n thì ta in ra số đó và dừng vòng lặp
		if(F[i] >= n){
			cout << F[i] ;
			break;
		}
	}
}
int main(){
	long long n ;cin >> n;
	fibo(n);
	return 0;
}