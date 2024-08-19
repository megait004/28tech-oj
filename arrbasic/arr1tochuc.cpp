#include<iostream>
using namespace std;
int main(){
	int n ; cin >> n;
	int arr[n];
	for(int i = 0; i < n ; i++){
		cin >> arr[i];
	}
	// duyệt từ trái qua phải
	for(int i = 0 ; i < n ; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	// duyet tu n - 1 ve 0 , in các số từ phải qua trái
	for(int i = n - 1 ; i >= 0 ; i-- ){
		cout << arr[i] << " ";
	}
	
}