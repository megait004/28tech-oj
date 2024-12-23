#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
	int n ; 
	cin >> n ;
	char arr[n];
	for(int i = 0 ; i < n ; i ++){
		cin >> arr[i];
	}
	set<char> se;
	for(int i = 0 ; i < n ;  i++){
		if(isdigit(arr[i])){
			continue;
		}
		else {
			arr[i] = tolower(arr[i]);
			se.insert(arr[i]);
		}
	}
	cout << se.size();
	cout << endl;
	for(auto it : se){
		cout << it << " ";
	}
}