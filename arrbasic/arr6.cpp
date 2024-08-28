#include<iostream>
using namespace std;
int main(){
	int n ; cin >> n;
	int arr[n];
	int dem = 0 ;
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	int k ;cin >> k;
	for(int i = 0 ; i < n ; i++){
		for(int j = i + 1 ; j < n ; j++){
			if(arr[i] + arr[j] == k){
				dem = dem + 1;
			}
		}
	}
	cout << dem ;
	return 0;

}