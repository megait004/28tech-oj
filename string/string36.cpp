#include<bits/stdc++.h>
using namespace std;
int main(){
	string s ; cin >> s ;
	int dem = 0 ;
	string tmp = "";
	string tmp1;
	string tmp2;
	int so1;
	int so2;
	int so;
	for(int i = 0 ; i < s.size(); i ++){
		dem++;
		if(dem == s.size()-1){
			s[i] = s[i] -'0';
			so1 = s[i];
			 tmp1 = to_string(so1);
		}
		if(dem == s.size()){
			s[i] = s[i] - '0';
			so2 = s[i];
			 tmp2 = to_string(so2);
		}
		tmp = tmp1	+ tmp2;
	}
	so = stoi(tmp);
	if(so % 4 == 0){
		cout << "YES";
	}
	else 
		cout << "NO";

	return 0 ;
	
	
}
