#include<iostream>
using namespace std;
int main(){
	long long a , b ,c ,d;
	int q;
	cin >> a >> b >> c >> d;
	if( b % a == 0){
		int q1 = b / a;
		q = q1;
	}
	if( b * q == c && c * q == d){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	
	
	return 0;
}