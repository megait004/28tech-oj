#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n ; cin >> n;
	int gt = 1;
	double sum = 0;
	for(int i = 1 ; i <= n ;i++){
		gt = gt *i;
		sum = sum + 1 / (double)gt;
	}
	cout << setprecision(2) << fixed << sum +1 ; //  phải cộng thêm 1 vì còn thằng 0 giai thừa bằng 1
	return 0 ;
}