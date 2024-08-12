#include<iostream>
using namespace std;
void divisible3(int n ){
	for(int i = 3 ; i <= n ;i+=3){
		cout << i << " ";	
	}}
void divisible3And5(int n){
	for(int i = 0 ; i <= n; i++ ){
		if(i % 3 ==0 && i % 5 ==0){
			cout << i << " ";
		}
	}
}
void divisible7min(int n){
	for(int i = n ; i >= n;i++){
		if(i % 7 == 0){
			cout << i << " ";
			break;
		}
	}
}
void divisible9max(int n ){
	for(int i = n ; i >= 0; i--){
		if(i % 9 == 0){
			cout << i << " ";
			break;
		}
	}
}
void series(int n){
	for(int i = 1 ; i<= 2*n -1;i++){
		if(i % 2 != 0){
			cout << i << " ";
		}
	}
}
int main(){
	int n ;
	cin >> n;
	divisible3(n);
	cout << endl;
	divisible3And5(n);
	cout << endl;
	divisible7min(n);
	cout << endl;
	divisible9max(n);
	cout << endl;
	series(n);
}
