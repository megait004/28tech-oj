#include<iostream>
using namespace std;
/*
 Số các tổ hợp chập k của một tập hợp có n phần tử là : Công thức tổ hợp 
 C(n, k) = n! / [(n-k)! * k!] = A(n, k) / k!
*/
int main(){
	// phân tách giai thừa n! = n * ( n -1 )!  = n * (n - 1) * (n - 2)!
	// rút gọn cho thằng ( n - 2)! ở mẫu 
	long long n; cin >> n;
	// chon 2 sinh viên trong n sinh viên là :
	long long sv;
	sv = n * (n - 1) / 2;
	cout << sv;
	return 0;
}