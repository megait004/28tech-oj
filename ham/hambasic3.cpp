#include<iostream>
using namespace std;
void solve(long long &a);

void solve(long long &a){
	a = a * 28;
	cout << a <<endl;
	
}
int main(){
	long long n;
	cin >> n;
	solve(n);
	return 0;
}