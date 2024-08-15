#include<iostream>
using namespace std;
int main(){
	int n ; cin >> n;
	
	for(int i = 1 ; i <= n ; i++){
		char dem;
		if( i % 2 == 1) {
			dem = 'A' + i -1; // biến đếm để xác định chữ cái đầu tiên của hàng lẻ
		}
		else dem = 'a'+ i - 1; // xác định chữ cái đầu tiên của hàng chẵn
		for(int j = 1 ; j <= n ;j++){
			cout << dem;
			dem++;
		}
		cout << endl;
	}
	return 0;
}