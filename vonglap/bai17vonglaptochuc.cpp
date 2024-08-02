#include<iostream>
using namespace std;
int main(){
	long long n;
	cin >> n ;
	long long sum = 0;
	if(n == 0 ){
		sum = sum + n ;
		cout << sum ;
		return 0;
	}
	for(int i = 0 ; i < n; (n = n /10)){
		sum = sum + (n % 10); /* lấy phần dư 
		cộng dồn vào tổng sau 1 lần lặp bài này số lần lặp 
		dựa vào bài 16 tìm sô lượng chữ số của n
		 
		ví dụ n = 12341 thì  n / 10  = 1234 dư 1 
		sau mỗi lần lặp thì chia tiếp 1234 / 10 = 123 dư 4 
		    => số lần lặp sẽ là số lần chia nguyên khi nào n chạm 0 thì dừng */
		}
	cout << sum ;

	return 0;

}