#include<iostream>
using namespace std;
int main(){
	// bội 2 là : nhưng số 2  , 4 ,6 ,8 .... 
	// tổng bội 2 công thức S =2+4+6+8+.....+2*n
	// hiểu đơn giản  là tổng của dãy số  2 nhân với các số nguyên liên tiếp từ 1 đến n
	/*
	 số đầu tiên là 2 là 2 *1 ;
	 số thứ hai là 4  là 2 * 2;
	 số thứ ba là 6  là 2 * 3 ;
	 .......     n * 2 ;
	*/

	int n ;
	cin >> n ;
	long long  sum ;
	sum = 0 ;
	for(int i = 1 ; i <= n ;i++){
	      sum = sum + (long long ) i * 2 ;
		
	}
	cout << sum << endl;
	return 0;
}
