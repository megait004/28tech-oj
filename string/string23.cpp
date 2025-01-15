#include<bits/stdc++.h>
using namespace std;
bool cmp(string a , string b){
	if(a != b ){
		 return a + b > b + a;;
	}
	
}
int main(){
	int n ; cin >> n ;
	cin.ignore();
	vector<string> v;
	while(n--){
		string s ;
		getline(cin ,s);
		stringstream ss (s);
		string tmp;
		while(ss >> tmp){
			v.push_back(tmp);
		}
	}
	
	sort(v.begin() , v.end(), cmp);
	for(int i = 0 ; i < v.size() ; i ++){
		cout << v[i];
	}
	return 0 ;
}