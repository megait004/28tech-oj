#include<iostream>
using namespace std;
int main(){
	int h , p ;
	cin >> h >> p ; // nhập vào số h và số phút 
	int pTruocTet;
	int p1Day = 24 * 60; // tính số phút của 1 ngày
	if( h < p1Day && p == 0){
		pTruocTet = p1Day - (h * 60) ;
		cout << pTruocTet;
	}
	else if( h < p1Day && p > 0){
		pTruocTet = p1Day - (h * 60 + p);
		cout << pTruocTet;
	}
	else{
		pTruocTet = p1Day - p1Day ;
		cout << pTruocTet;
	}
	return 0;
}