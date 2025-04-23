#include<bits/stdc++.h>
using namespace std;
int main(){
	string s ;
	vector<string> v;
	map<string,int> mp;
	while(getline(cin,s)){
		v.push_back(s);
	}
	for(int i = 0 ; i < v.size() ; i++){
		mp[v[i]]++;
	}
	for(auto it : mp){
		cout << it.first << " " << it.second;
		cout << endl;
	}
}
