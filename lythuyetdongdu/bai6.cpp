#include<iostream>
#define mod 1000000007
using namespace std;
int main(){
	long long a ,b ;
	cin >> a >> b ;
	long long t = 1 ;
	for(long long  i = 1 ; i <= b ;i++){
		t = ((t % mod) * (a % mod)) % mod ; // nhân dồn thằng a là tích = tích nhân a với số lần lặp của a là b 
	}
	cout << t % mod;
}