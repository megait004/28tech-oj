#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
// t?o ham ki?m tra nguyen t? 
bool nt(int n ){
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0){
			return false;
		}
	}
	return n > 1;	
}
int main(){
	int n ; 
	cin >> n;
	long long arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	// t?o bi?n sum d? tinh t?ng
	double sum = 0 ; 
	// bi?n d?m d? d?m s? nguyen t? 
	int dem = 0;
	for(int i = 0 ; i < n ; i++){
		if(nt(arr[i])){
			dem++;
			sum = sum + arr[i];
		}
	}
	double tb  = sum / (double)dem;
	cout << setprecision(3) << fixed << tb;
	return 0;
}