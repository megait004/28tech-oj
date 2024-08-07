#include<iostream>
using namespace std;
void displayNumber(long long x , long long y , long long z ){
	long long sum = x + y + z;
	cout << y << " " << x << " " << z << endl ;
	cout << sum << endl ;
	cout << "KET THUC !";
}

int main(){
	long long a ,b ,c;
	cin >> a >> b >> c ;
	displayNumber(a,b,c);
	return 0;
}