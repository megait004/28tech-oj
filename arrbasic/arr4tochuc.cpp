#include<iostream>
using namespace std;
void nhap(int arr[], int n){
	for(int i = 0 ; i < n ;i++){
		cin >> arr[i];
	}
	
}
void xuat(int arr[] , int n ){
	for(int i = 0 ; i < n ; i++){
		cout << arr[i] << " ";
	}
	
	
}
void thaydoi(int arr[] , int n){
	for(int i = 0 ; i < n ; i++){
		arr[i] = arr[i] * 2;
	}
	
}
int main(){
	int n ; 
	cin >> n ;
	int arr[n];
	// note : goi ham nao truoc thi ham do thuc thi truoc 
	nhap(arr,n);
	thaydoi(arr,n);
	xuat(arr,n);
	return 0;

	
}