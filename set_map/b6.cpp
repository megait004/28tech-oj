#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
	int n ; cin >> n;
	// cú pháp khai báo để lưu pair vào set
	set<pair<int,int>> se;
	for(int i = 0 ; i < n ; i++){
		// nhập toạ độ x và y 
		int x ; cin >> x;
		int y ;cin >> y;
		// cú pháp insert khi kiểu dữ liệu là pair
		se.insert({x ,y});
	}
	// in ra số lượng toạ độ khác nhau
	cout << se.size();
	
	return 0; 
}