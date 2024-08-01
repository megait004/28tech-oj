#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float F,after;
	cin >>F;
	after=(int)F%100; // chú ý là chia 100 chứ không phải chia 10 chia 10 nó chỉ lấy được 1 số thập phân đằng sau 
	F=F-after;
	cout << after  << endl;
	cout <<  setprecision(2) << fixed << F;
	
}
