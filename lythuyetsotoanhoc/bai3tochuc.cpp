#include<iostream>
#include<cmath>
using namespace std;
bool check(int n ){
	if(n < 2 ){
		return false;
	}
	for(int i = 2 ; i <= sqrt(n) ; i++ ){ // chú ý là " duyệt từ 2 đến  <= sqrt(n)"
		if(n % i == 0){
			return false;
		}
	}
	return n > 1;
}
int main(){
	int n ; cin >> n;
	int t ; 
	for(int i = 1 ; i <= n ; i++){ // chạy từ 1 đến n đủ ma sai ngu vc
		cin >> t;
		if(check(t)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}