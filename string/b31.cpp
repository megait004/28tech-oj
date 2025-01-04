#include<bits/stdc++.h>
using namespace std;
int main(){
	string s ; 
	cin >> s ;
	map<char ,int > mp;
	set<char> se;
	for(int i = 0 ; i < s.size(); i++){
		mp[s[i]]++;
		se.insert(s[i]);
	}
	for(auto it : se){
		if(mp[it] != 0){
			cout << it << " " << mp[it] << endl;
		}
		mp[it] = 0;
	}
	return 0 ;
}