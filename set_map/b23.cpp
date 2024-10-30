#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
	int n ; cin >> n ;
	map<int,int> mp;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i ++){
		cin >> v[i];
		mp[v[i]]++;
	}
	// in theo tang d?n 
	for(auto it : mp){
		if(it.second % 2 == 0){
			cout << it.first << " " << it.second << endl; 
		}
	}
	cout << endl;
	// IN theo gi?m d?n 
	for(auto it = mp.rbegin() ; it != mp.rend() ;it++){
		if(it -> second % 2 == 0 ){
			cout << it -> first << " " << it -> second << endl ;
		}
	}
	return 0; 
}