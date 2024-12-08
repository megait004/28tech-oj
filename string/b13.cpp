#include<bits/stdc++.h>
using namespace std;
int main(){
	string s ;
	getline(cin , s);
	for(int i = 0 ; i < s.size() ; i++){
		if(s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?'){
			s[i] = ' ';
		}
	}
	stringstream ss(s);
	string tmp;
	while(getline(ss,tmp,' ')){
		cout << tmp << " ";
	}
	return 0;
}