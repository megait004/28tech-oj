#include<bits/stdc++.h>
using namespace std;
int main(){
	string s ; 
	getline(cin , s);
	stringstream ss(s) ;
	string tmp ;
	vector<string> v; 
	while(ss >> tmp){
		v.push_back(tmp);
	}
	sort(v.begin() , v.end());
	for(auto it : v){
		cout << it << " ";
	}
	cout << endl;
	reverse(v.begin() , v.end());
	for(auto it : v){
		cout << it << " ";
	}
	return 0 ;
}