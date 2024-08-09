#include<iostream>
#define ll long long
using namespace std;
ll rev(ll n);
ll rev(ll n){
	long long du;
	long long nguyen = 0;
	for(long long i = 0 ; n > i ; n = n / 10){
		du = n % 10; // chu so cuoi cung;
	   nguyen = (long long)nguyen * 10 + (du); // đầu vào 1234
	   /* giải thích cho đoạn khai bao 1 biến nguyên
	   ta cho biến nguyên bằng 0 để sau khi ta lấy được chữ số 
	   cuối cùng thì ta sẽ lấy biến khai báo là nguyên * 10 + cho phần chữ số cuối cùng lấy dược đó
	   -> cụ thể : chữ số láy ra là 4 
	   	nguyen = 0 * 10 + 4 ; -> nguyen = 4 
	    	chia cho 10 để bỏ số đã lấy ra - > còn 123 
	    - > nguyen = 4 * 10 + dư tiếp theo là 3 ; ->  nguyen = 43
	    ....
	   */
	
	}
	return nguyen;
}
int main(){
	ll n ;
	cin >>n ;
	cout << rev(n);
return 0;
}