#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long d1 , d2 , d3;
	cin >> d1 >> d2 >> d3;
	long long c1 , c2 , c3 , c4;
	c1 = d1 + d3 + d2 ; // di qua d1 d?n d3 r?i sang d2
	c2 = 2 * d1 + 2 * d2; // di 2 l?n d1 + 2 l?n d2
	c3 = 2 * d2 + 2 * d3; // di 2 l?n d2 + 2 l?n d3
	c4 = 2 * d1 + 2 * d3; // di 2 l?n d1 + 2 l?n d3
	cout << min({c1,c2,c3,c4});
	return 0;
}