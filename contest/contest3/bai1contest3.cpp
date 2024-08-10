#include<iostream>
using namespace std;
int main( ){
	int n ;
	cin >> n;
	int demt = 0 ; // đếm chữ thường
	int demh = 0; // đếm chữ hoa 
	int dems = 0; // đếm chữ số
	int demkt = 0; // đếm kí tự đặc biệt
	char c;
	for(int i = 1 ;i<=n ;i++){
		cin >> c;
		if(c >= 97 && c <= 122){ // kiểm tra là chữ thường
			demt = demt + 1;
		}
		else if(c >= 65 && c <= 90){ // kiểm tra là chũ hoa
			demh = demh +1 ;
		}
		else if( c >= 48 && c <= 57){ // kiểm tra là chữ số 
			dems =dems + 1;
		}
		else{ // kiểm tra là ký tự đặc biệt
			demkt = demkt + 1;
		}
	}
	cout << demt << " " << demh << " " << dems << " " << demkt;
	return 0;
}
