#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n ;cin >> n;
	long long gt = 1;
	double sum = 0;
	for(int i =1 ; i <= n -1 ;i++){ // công thuc là tính tổng đến ( n -1 ) !
		gt = (double)gt * i; // tính giai thừa 
		sum = sum + (1.0 / gt );  // tổng của 1 chia từng giai thừa
	}
	
	cout << setprecision(4) << fixed << sum+1 ;
	return 0;
	
}