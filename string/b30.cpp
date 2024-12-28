#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s , t ; 
	cin >> s >> t ;
	// sắp xếp để hai chuỗi theo thứ tự từ điển
	sort(s.begin() , s.end());
	sort(t.begin(), t.end());
	// kiểm tra nếu mà hai chuỗi bằng nhau sẽ là hoãn vị của nhau 
	if(s == t){
		cout << "28tech";
	}
	else 
		cout << "29tech";
		return 0 ;
}