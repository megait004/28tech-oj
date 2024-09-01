#include<iostream>
using namespace std;
// công thức leggendry
long long bac(long long  n , long long p ){
	long long dem = 0;
	for(long long i = p ; i <= n ; i *= p){
		dem = dem + n / i; // đếm xem no chia hết cho bao nhiều thằng x trong p ^ x;
	}
	return dem; // Đếm ở đây là đếm số x 
}
int main(){
	long long n , p;
	cin >> n >> p ;
	cout << bac(n , p);
}