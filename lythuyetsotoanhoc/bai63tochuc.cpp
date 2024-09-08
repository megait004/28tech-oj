#include<iostream>
#define mod 1000000007
using namespace std;
long long F[1000005];
int main(){
	F[1] = 0 ; 
	F[2] = 1;
	// vòng for tính số fibo đến 1 triệu tuỳ vào input của bài
	for(int i = 3 ; i <= 1000000 ; i++){
		F[i] = F[i-1] + F[i - 2];
		F[i] = F[i] % mod;
	}
	// nhập n để in ra số fibo thứ n
	int n ; cin >> n;
	cout << F[n] << endl;
}