#include<iostream>
using namespace std;
// hàm tìm ước chung lớn nhất
int gcd(int a , int b ){
	while(b != 0){
	int r = a % b ;
		a = b ; 
		b = r;
	}
	if(b == 0)
		return a ;
}
int main(){
	int a , b ;
	cin >> a >> b;
	/* Khi i có giá trị cụ thể, vòng for thứ hai sẽ bắt đầu với j = i + 1 và tiếp tục tăng j cho đến khi j lớn hơn b.
	Ý nghĩa của việc bắt đầu từ j = i + 1 là để đảm bảo rằng chỉ những cặp số
 	(i, j) với i < j mới được kiểm tra,
	tránh kiểm tra những cặp số mà i >= j hoặc i == j, 
 	vì hai số cần phải khác nhau và i nhỏ hơn j.*/
	for(int i = a ; i <= b ; i++){
		for(int j = i + 1 ; j <= b ; j ++){
			if(gcd(i,j) == 1 ){
				 cout << "(" << i << "," << j << ")\n";
			}
		}
	}
	return 0;
}