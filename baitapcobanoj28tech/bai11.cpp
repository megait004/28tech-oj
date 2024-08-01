#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	unsigned long N; //  hầu như xài kiểu dữ liệu unsigned long 
	cin >> N;
	cout << N*2 << "\n" << "\n" << "\n";
	cout << N*10 <<"\n" <<"\n"  << "\n";
	cout << N/2 <<"\n" <<"\n"  << "\n";
	cout <<setprecision(3) << fixed << (double)N/2 ;
	return 0;
}
