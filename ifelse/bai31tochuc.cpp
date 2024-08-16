#include<iostream>
using namespace std;
int main(){
	int a1 , a2 ,a3 , b1 ,b2 ,b3;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	int n ;
	cin >> n;
	int keCup;
	int keHuyChuong;
	// tong cup
	 int tc = a1 + a2 + a3;
	// tong huy chuong
	int hc = b1 + b2 + b3;
	// số kệ để cup mỗi kệ chỉ được để 5 cúp
	
	if(tc % 5 == 0){ // tổng cúp mà là số chăn
	
		keCup = tc / 5; // số kệ để cup
	}
	else if( tc % 5 !=0){ // tổng cúp mà là số lẻ
		keCup = tc / 5 + 1;
	}
	// sô kệ để huy chương mỗi kệ chỉ để được 10 huy chương
	
	 if(hc % 10 == 0){ // tổng huy chương mà là số chăn
		keHuyChuong = hc / 10;
	}
	
	else if(hc % 10 != 0){ // tổng huy chương mà là số lẻ
		keHuyChuong = hc / 10 + 1;
	}
	
	int tongKe;
	tongKe = keCup + keHuyChuong;
	if(tongKe <= n){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}