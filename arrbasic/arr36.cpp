#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n ; cin >> n ;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	int max_digit = -1;
	int min_digit = 1000000;
	// tìm min và vị trí min 
	for(int i = 0 ; i < n ; i++){
		if(v[i] < min_digit){
			min_digit = v[i];
		}
	}
	cout << min_digit << endl;
	for(int i = 0 ; i < n ; i++){
		if(v[i] == min_digit){
			cout << i << " ";
		}
	}
	cout << endl;
	// tìm max và vị trí max 
	for(int i = 0 ; i < n ; i++){
		if(v[i] > max_digit){
			max_digit = v[i];
		}
	}
	cout << max_digit << endl;
	for(int i = n ; i >= 0 ; i--){
		if(v[i] == max_digit){
			cout << i << " ";
		}
	}
	return 0; 
}