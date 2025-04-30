#include<bits/stdc++.h>
using namespace std;
int main(){
	string s ; 
	string t ;
	getline(cin , s );
	getline(cin , t );
	stringstream ss (s);
	stringstream tt(t);
	string tmp1 ;
	string tmp2;
	set<string> se1;
	set<string> se2;
	while(ss >> tmp1){
		for(auto &c : tmp1){
			c = tolower(c);
		}
		se1.insert(tmp1);
	}
	while(tt >> tmp2){
		for(auto &c : tmp2){
			c = tolower(c);
		}
			se2.insert(tmp2);
	}
	map<string,int> mp;
	for(auto it : se2){
		mp[it] = 1;
	}
	for(auto it : se1){
		if(mp[it] != 1){
			cout << it << " ";
		}
	}
	return 0 ;
	
}
