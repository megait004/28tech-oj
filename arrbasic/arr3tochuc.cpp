#include<iostream>
using namespace std;
int main(){
	int n; cin >> n ;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	int demc = 0;
	int deml = 0;
	for(int i = 0 ; i < n ; i++){
		if(arr[i] % 2 == 0){
			demc++;
		}
		else {
			deml++;
		}
	}
	cout << demc << " " << deml;
	return 0;
}