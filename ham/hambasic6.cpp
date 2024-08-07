#include<iostream>
using namespace std;
int sum_digit(long long n);
int sum_digit(long long n){ // hàm này để tính tổng từng chữ số x 
	long long sum = 0 ;
	for(int i = 0 ; n > i ; (n = n /10 )){
		sum = sum + (n % 10);
	}
	return sum;
}
int main(){ // hàm main để ta nhập từng giá trị của x 
    int n; cin >> n; 
    long long x;
    for(int i = 1; i <= n; i++){
        cin >> x;
        cout << sum_digit(x) << " "; // sau đó gọi hàm tính tổng các chữ số của x duyệt đến i <=n vì n là số lượng chữ số 
    }
    return 0;
}
