#include<iostream>
using namespace std;
int main(){
	long long n , u1 , d;
	cin >> n >> u1 >> d;
	long long s;
	s = n * u1 + ((n * n * d) - (n * d)) / 2; // Công thức cấp số cộng khi biến n , u1 ,d - công sai
	cout << s ;
	return 0;
}