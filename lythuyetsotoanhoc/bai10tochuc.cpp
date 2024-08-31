#include<iostream>
#include<cmath>
#define mod 1000000007
using namespace std;
int main(){
	// khai báo 1 biến t để liệt kê ra số lương thừa số nto khác nhau theo đề bài
	
	int t ;cin >> t;
	// nhập p là thua sô nguyên tố khác nhau , e là sỗ mũ của mỗi thừa số ngto
	
	int p , e ;
	long long uoc = 1;
	for(int i = 1 ; i <= t ; i++){
		cin >> p >> e;
		// công thức  N = 60 = 2^2 * 3^1 * 5^1 thì số ước của 60 = (2 + 1) * (1 + 1) * (1 + 1) = 12 ước.
		uoc = (uoc *(e+1)) % mod;
	}
	cout << uoc % mod;
	return 0;
}