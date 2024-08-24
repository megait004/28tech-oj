#include<iostream>
#include<cmath>
using namespace std;
// ham kiem tra nguyen to
bool nt( long long n){
	for(int i = 2; i <= sqrt(n) ; i++){
		if(n % i == 0){
			return false;
		}
	}
	return n > 1;
}
// ham kiem tra cac chu so trong so do co phai la nguyen to hay khong
bool csnt(long long n){
	int digit;
	while(n != 0 ){
		digit = n % 10;
		if(digit != 2 && digit != 3 && digit != 5 && digit != 7){
			return false;
		}
		n = n / 10;
	}
	return true;
}
// ham kiem tra neu tong cac chu so cung la nguyen to
bool sumnt(long long n){
	long long sum = 0;
	int digit;
	while(n != 0){
		digit = n % 10;
		sum = sum + digit;
		n = n / 10;
	}
	return nt(sum);
}


int main(){
    int a, b; cin >> a >> b;
    int dem = 0;
    for(int i = a; i <= b; i++){
        if(csnt(i) && nt(i) && sumnt(i)){
            ++dem;
        }
    }
    cout << dem;
}