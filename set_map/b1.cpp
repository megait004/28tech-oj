#include<iostream>
#include<set>
using namespace std;
int main(){
	int n ;
	cin >> n ;
	// khai báo set
	set<int> se;
	// duyệt n để nhập số phần tử 
	for(int i = 0 ; i < n ; i++){
		int x ; 
		cin >> x;
		// mỗi lần nhập insert vào set
		se.insert(x);
	}
	// kiểm tra số lượng phần tử trong mảng -> với set thì nó loại bỏ phần tử trùng nhau
	cout << se.size() << endl;
	return 0;
}