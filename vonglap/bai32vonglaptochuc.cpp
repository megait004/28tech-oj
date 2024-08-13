#include<iostream>
using namespace std;
int main(){
	int n ; cin >> n;
	int c;
	c = 65; // vì hình này in ra chữ từ A hoa nên khai bao bien c = 65 và ép kiểu sang char
	for(int i = 1 ; i <= n ;i++){
		for(int j = 1 ; j <= i ;j++){
			cout << (char)c << " ";
		}
		c= c +1; // sau mỗi lần in tăng biến c lên 1 đơn vị 
