#include<iostream>
#define mod 1000000007 // định nghĩa kiểu dữ liệu đầu bài yêu câu kết quả sau khi tính mod cho thằng 10^9 + 7;
using namespace std;
int main(){
	long long n ; cin >> n;
	long long arr[n];
	for(long long  i = 0; i < n ; i++){
		cin >> arr[i];
	}
	long long tich = 1 ;
	for(long long i = 0 ; i < n ; i++){
		tich = ((long long)tich * arr[i]) % mod; // chia luôn khi tính tích mỗi phần tử 
	}
	cout << tich  ;
	return 0; 
	
	
}