#include<iostream>
using namespace std;
int main(){
	int n ;cin >> n;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	int x ;
	cin >> x;
	int deml = 0;
	int demn = 0;
	for(int i : arr){
		if(i > x ){
			deml++;
		}
	}
	for(int j : arr){
		if(j < x ){
			demn++;
		}
	}
	cout << demn << endl << deml;
	return 0;
	
}