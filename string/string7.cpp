#include<bits/stdc++.h>
using namespace std;
bool doiXung(string s){
	string tmp_reversed = s;
    reverse(tmp_reversed.begin(), tmp_reversed.end());
        if (s == tmp_reversed) {
            return true;
        }
    return false;
}
int main(){
	string s ; 
	cin >> s ;
	if(doiXung(s)){
		cout << "YES";
	}
	else 
		cout << "NO";

	return 0 ;
}