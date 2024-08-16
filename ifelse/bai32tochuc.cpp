#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long k2 , k3 , k5 , k6 ;
	cin >> k2 >> k3 >> k5 >> k6 ;
	long long soChuSo256;
	soChuSo256 = min({k2,k5,k6}); // tìm số nhỏ nhất để ghép được thành 256 là số có lượng chữ số nhỏ nhất
	long long soChuSo32;
	soChuSo32 = min({k3,k2 - soChuSo256}); // sau đó thì số còn lại sẽ là số lượng chữ số ban đầu trừ đi số lượng chữ số min đã ghép ở số trươc
	cout << (long long)256 * soChuSo256 + (long long)32 * soChuSo32;
	return 0;
}