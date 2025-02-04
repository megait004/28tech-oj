#include<bits/stdc++.h>
using namespace std;
bool kiemTra(string s ){
	string tmp = s ;
	reverse(s.begin(),s.end());
	if(s == tmp){
		return true;
	}
	return false;
}
int main(){
	string s ; cin >> s ;
	cout << boolalpha << kiemTra(s) << endl;
}