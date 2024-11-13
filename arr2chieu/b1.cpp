#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n ){
	if(n < 2) return false;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0 ){
			return false;
		}
	}
	return true;
}
int main(){
	int n ; cin >> n ; 
	int m ; cin >> m ;
	int arr[n][m];
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < m ; j ++){
			cin >> arr[i][j];
		}
	}
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < m ; j ++){
			if(isPrime(arr[i][j])){
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
}