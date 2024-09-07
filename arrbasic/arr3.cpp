#include<iostream>
using namespace std;
int main(){
	int n ; 
	cin >> n ;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	int mins = arr[0];
	int dem = 0;
	for(int i = 0 ; i < n ; i++){
		if(arr[i] <= mins){
			mins = arr[i];
		}
	}
	for(int i : arr){
		if( i == mins)
		dem++; // nghĩa là lúc này xét xem pần tử trong mảng bằng với min thì mới đếm 
	}
	cout << dem;
}
