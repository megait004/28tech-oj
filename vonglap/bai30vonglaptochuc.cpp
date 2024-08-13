#include<iostream>
using namespace std;
int main(){
	int n ; cin >> n;
	int t ;
	for(int i = 1 ; i <= n;i++){
		cin >> t;
		if(t % 2 == 0){
			cout << "EVEN" << endl;
	}
		else{
			cout << "ODD" << endl;
	}
	}
	
}