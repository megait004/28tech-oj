#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long a , b , c , d;
	cin >> a >> b >> c >> d ;
	cout << max({a,b,c,d});
	cout << " ";
	cout << min({a,b,c,d});
	return 0;
}