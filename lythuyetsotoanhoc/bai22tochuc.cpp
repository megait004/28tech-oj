#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	// bài đếm số lượng số chính phương thì chỉ cần tạo biến đếm 
	// và duyệt từ căn của a đến căn của b như bài trước và tăng biến đếm lên
	// không cần tạo hàm chính phương 
	long long a , b; cin >> a >> b;
	long long dem = 0;
	long long c1 = ceil(sqrt(a));
	long long  c2 = sqrt(b);
	for(long long i = c1 ; i <= c2 ; i++){
		dem ++;
	}
	cout << dem;
	return 0;
	}
