//Kiểu dữ liệu-if else]. Bài 16. Ký tự kế tiếp 

/*
-Chữ cái in hoa từ 65 -> 90 
-Chữ cái in thường từ 96 - > 122 
- KHoảng cách giữa chữ cái in hoa và chữ cái in thường là 32 
*/


#include<iostream>
using namespace std;
int main(){
	char c;
	cin >> c ;
	if(c>=65&&c<90){
		c=c+1;
		c=c+32;
		cout << c;
	
	}
	else if( c == 'Z' ){
		c =c+7;
		cout << c ;
	}
	else if(c>=97&&c<122){
		c=c+1;
		cout << c;
	}
	else {
		c=c-25;
		cout << c ;
	}
	
	return 0;
}
