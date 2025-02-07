#include<bits/stdc++.h>
using namespace std;
int main(){
	string s ;
	getline(cin , s );
	map<string , int> mp;
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss >> tmp){
		mp[tmp]++;
		v.push_back(tmp);
	}
	for(int i = 0 ; i < v.size() ; i++){
		if(mp[v[i]] != 0){
			cout << v[i] << " " << mp[v[i]] << endl;
		}
		mp[v[i]] = 0 ;
	}
	return 0 ; 
}