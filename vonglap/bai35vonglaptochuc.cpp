#include<iostream>
using namespace std;
int main(){// in tam giác cân ngược thì chỉ cần cho i chạy từ n về 1 còn bên trong vòng for j đã có công thức
	int n ; cin >> n; 
	// code for của j thì giống bài 33
	for(int i = n ; i >= 1 ; i--){
		for( int j = 1 ; j <= n - i ; j ++){
			cout << " " << " ";
		}
		for(int j = 1 ; j <= 2 * i -1; j++){
			cout << "*" << " ";
		}
		cout << endl;
	}
}