// [Vòng Lặp]. Bài 11. Tổng chẵn lẻ
#include<iostream>
using namespace std;
int main(){
	int n ;
	cin >> n ;
	int sum ;
	sum = 0 ;
	for(int i = 1 ;i <= n; i++){
		if(i % 2 == 0 ){
			sum = sum + i ;
		}
		else if( i % 2 != 0){
			sum = sum - i ;
		}
	}
	cout << sum << endl;
	return 0 ;
}
