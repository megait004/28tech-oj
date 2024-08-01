// ##[Kiểu dữ liệu-if else]. Bài 13. Đổi ngày sang năm, tuần, ngày 



#include<iostream>
using namespace std;
int main(){
	int n ,year,week ,day;
	cin >> n ;
	year = n/365;
	week = (n%365) / 7;
	day = (n%365)%7;
	cout << year << " " << week << " " << day ;
	return 0;
	
}
