#include<iostream>
#include<cmath>
using namespace std;
// hàm kiểm tra chữ số cuối cùng và kiểm tra chữ số cuối hoặc đầu có gấp đôi nhau hay không
bool cc(long long n ){
	// tìm chữ số cuồi cùng
	long long  socuoicung = n % 10;
	long long digit;
	// kiểm tra n còn khác 0
	while(n != 0){
		 digit = n % 10;
		n = n / 10;
	}
	// sau vòng while này digit sẽ là số ở vị trí đầu tiên
	
	if(((socuoicung % 2 == 0) && (socuoicung / 2 == digit)) || (digit % 2 == 0 && digit / 2 == socuoicung)){
		return true;
	}
	return false;
}
// hàm kiểm tra lật ngược bỏ đi số đầu và số cuối
bool latnguoc(long long n ){
	// bỏ chữ số cuồi cùng
	n = n / 10;
	long long lat = 0 ;
	// kiểm tra n > 10
	while(n > 10){
		lat = lat * 10 + n % 10;
		n = n / 10;
	}
	// sau vòng while này ta sẽ loại được chữ số đầu tiên 
	// biến lật lúc này là giá trị đã bỏ chữ số đầu và chữ số cuối
	long long m = lat ;
	long long lat2 = 0;
	// tạo vòng while thứ 2 kiếm tra biến "lat" nếu sau khi nó đảo ngược mà nó bằng chính nó thì là đúng
	while(lat > 0){
		lat2 = lat2 * 10 + lat % 10;
		lat = lat / 10;
	}
	if(lat2 == m){
		return true;
	}
	return false;
}
int main(){
	long long n ; cin >> n;
	if(cc(n) && latnguoc(n)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}