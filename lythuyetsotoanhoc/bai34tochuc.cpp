#include<iostream>
#include<cmath>
using namespace std;
long long ucln(long long  a , long long  b){
	while(b != 0){
		long long  r = a % b;
		a = b ; 
		b = r;
	}
	if(b == 0 ){
		return  a + b ;
	}
	return a ;
}
long long lcm(long long  a , long long  b){
	return a * b / ucln(a,b);
}
int main(){
	long long x , y ,z ,n;
	cin >> x >> y >> z >> n;
 	long long b = lcm(x,lcm(y,z)); // bcnn
 	long long a = pow(10,n-1); // số nhỏ nhất có n chữ số 
	long long kq = ((a + b - 1) / b) * b ; // số nhỏ nhất >= a , và chia hết cho b 
	long long lonnhat = pow(10,n) - 1; // so lon nhat co n chu so
	if(kq <= lonnhat){
		cout << kq;
	}
	else 
		cout << -1;
}

