#include<iostream>
using namespace std;
int main(){
	long long n;
	cin >> n;
	int dem =0 ;
	if(n == 0 ){
		cout << "1";
	}
	while( n > 0 ){ // su dung while neu 1 lan lap no van lon hon 0 thi chia tiep den khi n = 0 va 1 lan chia thi bien dem tang 1 don vi
		n = n / 10;
		dem = dem + 1;
	}
	cout << dem ;
	

	return 0;
	
}