#include<iostream> // đếm các phần tử ở trong phạm vi . sử dụng for và 1 biến đếm
using namespace std;
int main(){
	unsigned long long a ,b;
	int dem =0;
	cin >> a >> b;
	for(long i=a;i<=b;i++){
		dem =dem+1;
	}
	cout << dem ;
}
