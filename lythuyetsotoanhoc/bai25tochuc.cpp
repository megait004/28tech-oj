#include<iostream>
#include<cmath>
using namespace std;
// để kiểm tra số lượng ước của 1 số có phải là số lẻ hay không thì 
// ta tạo 1 hàm kiểm tra số chính phương vì số lượng ước của số đó chính là số chính phương 

bool chinhphuong(long long n){
	long long can = sqrt(n);
	if(can * can == n){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	long long n ;
	cin >> n ;
	if(chinhphuong(n) % 2 != 0){
		cout << "YES";
	}
	else
		cout << "NO";
	
	return 0;

}