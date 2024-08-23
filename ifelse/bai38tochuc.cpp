#include<iostream>
using namespace std;
int main(){
	int n ; 
	cin >> n;
	char kytu;
	int demc = 0;
	int demcong = 0;
	for(int i = 0 ; i < n ; i++ ){
		cin >> kytu;
		if(kytu == 'C'){
			demc++;
		}
		if(kytu == '+'){
			demcong++;
		}
	}
	if(demc >=1 && demcong >= 2){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0 ;
}