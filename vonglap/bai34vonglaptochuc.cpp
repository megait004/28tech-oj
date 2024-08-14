#include<iostream>
using namespace std;
int main(){// in tam giác cân ngược thì chỉ cần cho i chạy từ n về 1 còn bên trong vòng for j đã có công thức
	int n ; cin >> n; 
	// cực đại : 2 * i - 1
	// i - 1 kí tự trái phải
	for(int i = 1 ; i <= n ; i++){
		for( int j = 1 ; j <= n - i ; j ++){
			cout << " " << " ";
		}
		// ben trai
		int dem = i; 
		for(int j = 1 ; j <= i - 1; j++){
			cout << dem << " ";
			dem++;
		}
		cout << 2 * i - 1 << " "; // cuc dai
		// ben phai
		dem = 2 * i - 2;
		for ( int j = 1 ; j <= i -1 ; j++){
			cout << dem << " " ;
			dem--;
		}
		cout << endl;
	}
}