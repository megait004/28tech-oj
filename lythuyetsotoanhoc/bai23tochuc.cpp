#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long n ; cin >> n;
	long long sum = 0;
	//duyệt ước từ 1 tới căn n 
	for(int i = 1 ; i <= sqrt(n) ;i++){
		if(n % i == 0){
			sum = sum + i;
			if(i != n / i){ //  kiểm tra ước còn lại nếu mà nó khác với ước trước thì mới tính 
			//  ví dụ như ước của 16 là 4 thì ước còn lại cũng là 4 nên chỉ tính 1 lần
				sum = sum + n / i;
			}
		}
	}
	cout << sum ;
	return 0;
}
