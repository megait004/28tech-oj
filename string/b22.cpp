#include<bits/stdc++.h>
using namespace std;
string array_to_string(char a[], int n){
	string result;
    for(int i = 0 ; i < n ; i ++ ){
    	if(a[i] == ' '){
    		continue;
		}
		else 
			result += a[i];
		
	}
	return result;
}

int main(){
    int n;
    char a[10001];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << array_to_string(a, n) << endl;
}
