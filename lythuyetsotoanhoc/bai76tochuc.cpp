#include<iostream>
using namespace std;
// hàm ước chung lớn nhất
int gcd (int a , int b ){
	while(b != 0){
		int r = a % b ;
		a = b ;
		b = r;
	}
	return a ;
}
// hàm bội chung nhỏ nhất
int lcm (int a , int b ){
	return a / gcd(a,b) *  b ;
}
int main(){
	int a , b , c, d;
	cin >> a >> b >> c >> d;
	int ucln , bcnn;
	ucln = gcd(gcd(a,b),gcd(c,d));
	bcnn = lcm(lcm(a,b),lcm(c,d));
	cout << ucln << " " << bcnn;
	return 0;
}