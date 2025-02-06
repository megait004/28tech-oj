#include<bits/stdc++.h>
using namespace std;
int main(){
	string s ; 
	getline(cin,s);
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		cout << tmp << " ";
	}
	return 0 ;
}