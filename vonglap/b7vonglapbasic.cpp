#include<iostream>
using namespace std;
int main(){
	long long n; cin >> n;
	int dv = n % 10; // lấy ra chữ số cuối cùng
	int max = dv; // gán chữ sô đó là max
	int t; // khoi tạo để lưu chữ số tiếp theo
	for(int i = 0 ; i < n ; n = n /10){
		t = n / 10 % 10; // chữ số tiếp theo cuối cùng
		if(t >= max){ // so sanh với chữ số max ban đầu;
			max = t;
		}
	}
	cout << max;
	}
