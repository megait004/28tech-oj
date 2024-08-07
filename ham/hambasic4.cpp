#include<iostream>
using namespace std;
int solve (int x , int y ,int z);
int solve (int x , int y ,int z ){
	long long tich;
	cout << "28tech.com.vn" << endl;
	cout << 2 * x  << " " << 3 * y << " " <<4 * z << endl;
	tich = (long long)x * y * z;
	return tich; 
}
int main(){
	long long n1 ,n2 ,n3;
	cin >> n1 >> n2 >> n3;
	cout << solve(n1,n2,n3) << endl;
	return 0;
}