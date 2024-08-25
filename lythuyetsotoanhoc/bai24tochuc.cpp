#include<iostream>
#include<cmath>
using namespace std;
long long  demuoc(long long n){
	long long dem = 0;
	//duyệt từ i tới căn của n để đếm ước 
	for(int i = 1 ; i <= sqrt(n) ; i++){
		if(n % i == 0){
			dem++;
			if( i != n /i){ // nếu mà ước còn lại nó khác i thì mới tính
				dem++;
			}
		}
	}
	return dem;
}
int main(){
	long long n ; cin >> n;
	cout << demuoc(n);
	return 0;
}