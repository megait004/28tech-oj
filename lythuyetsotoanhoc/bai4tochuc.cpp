#include<iostream>
#include<cmath>
using namespace std;
// ham kiem tra so nguyen to
bool nt(int n){
	for(int i = 2 ; i <= sqrt(n); i++){
		if(n % i == 0){
			return false ; 
		}
	}
	return n > 1 ;
}
bool csnt (int n ){
	int t;
	while(n != 0){
		t = n % 10;
		if(nt(t) == false){ // kiem tra neu mot so trong so do khong phai la nt return false, else return true
			return false;
		}
		n = n / 10;
	}
	return true;
}
int main(){
	int dem = 0;
	int a , b ; cin >> a >> b ;
	// nếu thoả mãn 
	// + nguyên tố 
	// + các chữ số là nguyên tố
	for(int i = a ; i <= b ; i++){
		if(csnt(i) && nt(i)){ // nếu không để hàm kiểm tra chữ số nguyên tố trước thì sẽ bị timelimit 
		// bởi vì là hàm kiểm tra csnt ít vòng lặp vì nó kiểm tra nếu 1 số trong số đó k phải là số ngto nó sẽ không kiểm tra hàm sau 
		
			dem++;
		}
	}
	cout << dem ;
	return 0;
}