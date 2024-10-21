#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n ; cin >> n ; 
	int m ; cin >> m;
	int arr[n];
	int arr2[m];
	vector<int> v;
	// trộn hai dãy sắp xếp thì chỉ cần push vào 1 vector 
	// sau đó sắp xếp vector đó là xong
	for(int i = 0 ; i < n ; i ++){
		cin >> arr[i];
		v.push_back(arr[i]);
	}
	for(int i = 0 ; i < m ; i ++){
		cin >> arr2[i];
		v.push_back(arr2[i]);
	}
	sort(v.begin(),v.end());
	for(int i : v){
		cout << i << " ";
	}
	
}