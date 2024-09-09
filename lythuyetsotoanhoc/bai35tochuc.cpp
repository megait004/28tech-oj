#include<iostream>
#include<cmath>
using namespace std;
// ham tim uoc chung lon nhat
long long gcd(long long a , long long b){
	while(b != 0){
		int r = a % b ;
		a = b ;
		b = r ;
	}
	return a ;
}
// ham tim bcnn
long long lcm(long long a , long long b ){
	return a / gcd(a,b) * b ;
}
int main(){
	long long a , b ;
	cin >> a >> b;
	cout << gcd(a,b) << " " << lcm(a,b);
	return 0;
}