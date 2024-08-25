#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	long long a , b ;
	cin >> a >> b ;
	// ,duyệt từ i bằng căn của a cho tới căn của b , phải làm tròn căn của thằng a 
	for(long long i = ceil(sqrt(a)) ; i <= sqrt(b); i++){
		cout << i * i << " ";
	}
	return 0;
}
