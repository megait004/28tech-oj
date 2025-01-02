#include<bits/stdc++.h>
using namespace std;
int main(){
	string s ;
	getline(cin , s );
	stringstream ss(s);
	string tmp;
	set<string> se;
	vector<string> v;
	map<string,int> mp;
	while(ss >> tmp){
		se.insert(tmp);
		v.push_back(tmp);
		
	}
	for(string i : se){
		cout << i << " ";
	}
	cout << endl;
	for(int i = 0 ; i < v.size() ; i++){
		mp[v[i]]++;
	}
	for(int i = 0 ; i < v.size() ; i++ ){
		if(mp[v[i]] != 0){
			cout << v[i] << " ";
		mp[v[i]] = 0 ;
	}
		
	}
	return 0 ;
}