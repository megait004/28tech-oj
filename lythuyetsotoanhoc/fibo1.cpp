#include<iostream>
#define mod 1000000007
using namespace std;
long long F[100];
int main(){
	F[1] = 1 ; 
	F[2] = 1;
	for(int i = 3 ; i <= 92 ; i++){
		F[i] = F[i-1] + F[i - 2]; 
	}
	int n ; cin >> n;
	for(int i = 1 ; i <= n ;i++){
		cout << F[i] << endl;
	}
	return 0;
}