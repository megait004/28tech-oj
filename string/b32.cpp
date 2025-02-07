#include<bits/stdc++.h>
using namespace std;
int main(){
	string s ;
	map<string , int> mp;
	getline(cin , s);
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		mp[tmp]++;
	}
	for(auto it : mp){
		cout << it.first <<  " " << it.second << endl;
	}
	return 0 ;
}