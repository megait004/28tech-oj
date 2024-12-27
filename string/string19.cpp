#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ; cin >> n ;
	cin.ignore();
	map<string,int> mp;
	for(int i = 0 ; i < n ; i ++){
		string s ;
		getline(cin, s);
		for(char &x : s) x = tolower(x);
		vector<string> v;
		string w ; stringstream ss(s);
		while(ss >> w){
			v.push_back(w);
		}
		int m = v.size();
		string email = v[m-2];
		for(int i = 0 ; i < m - 2 ; i++){
			email += v[i][0];
		}
		mp[email]++;
		if(mp[email] == 1){
			cout << email << "@xyz.edu.vn" << endl;
		}
		else 
		cout << email << mp[email]<< "@xyz.edu.vn" << endl;
		string ns = v[m-1];
		stringstream ss2(ns);
		while(getline(ss2,w,'/')){
			cout << stoi(w);
		}
		cout << endl;
	}
}
