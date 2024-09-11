#include<iostream>
#include<cmath>
using namespace std;
void ptnt(long long n ){
	// tạo biến thừa số với biến số mũ là nhỏ nhất để sau so sánh và lưu lại
	int ts = - 1,sm = -1;
	for(int i = 2 ; i <= sqrt(n) ;i++){
		if(n % i == 0){
			// tạo và cập nhật lại biến đếm
			int dem = 0;
			while(n % i == 0){
				dem++;
				// phân tích tsnt
				n = n / i;
			}
			if( dem > sm){
				sm = dem;
				ts = i ;
			}
		}
	}
	if(n > 1 && 1 > sm){
		sm = 1;
		ts = n;
	}
	cout << ts << " " << sm;
}
int main(){
	long long n ;cin >> n;
	ptnt(n);
}