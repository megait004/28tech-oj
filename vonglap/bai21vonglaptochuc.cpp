#include<iostream>
using namespace std;
int main(){
	int n ; 
	cin >> n;
	// hinh 1
	for(int i = 1 ;i <= n ;i++ ){
		for(int j  = 1 ; j <= n ; j++ ){
			cout << "*";
		}
		cout <<endl;
	}
	cout << endl;
	//hinh 2 
	for(int i =1 ; i <= n ;i++){
		for(int j =1; j <= n ;j++){
			if(i==1 || i ==n || j ==1 || j==n){
				cout << "*";
				
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
	// hinh 3
	for(int i =1 ; i <= n ;i++){
		for(int j =1; j <= n ;j++){
			if(i==1 || i ==n || j ==1 || j==n){
				cout << "*";
				
			}
			else{
				cout << "#";
			}
		}
		cout << endl;
	}
	cout << endl;
	// hinh 4
		for(int i =1 ; i <= n ;i++){
		for(int j =1; j <= n ;j++){
			if(i==1 ){
				cout << "1" << " ";
				
			}
		 	else if(i==n){
		 		cout << n << " ";
			 }
			else{
				if(j ==1 || j ==n){
				
					cout << i   << " ";
				}
				else {
					cout << " " << " "; 
				}
			}
		}
		cout << endl;
	}
	
}