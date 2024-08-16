#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n ;
	cin >> n; // là số tiền nhập vào 
	int d1 ,d5 ,d10 ,d20 ,d100; // mỗi biến là 1 mệnh giá 
	d100 = n / 100; // chia nguyên để đổi tối đa tờ 100
	d20 = n % 100 / 20 ; // lấy phần dư khi chia nguyên 100 chia nguyên 20 
	d10 = n % 20 / 10; // lấy phần dư của 20 chia nguyên cho 10
	d5 = n % 10 / 5; // lây phần dư của 10 chia nguyên cho 5 
	d1 = n % 5 / 1; // lấy phần dư của 5 chia nguyên cho 1
	int t = d100 + d20 + d10 + d5 + d1;
	cout << t ;
	
	return 0;
}
