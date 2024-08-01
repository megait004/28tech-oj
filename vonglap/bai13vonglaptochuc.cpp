#include<iostream>
using namespace std;
int main(){
	int n ;
	cin >> n ;
	long long sum ;
	sum = 0; 
	for ( int i = 1 ; i <= n ; i++){
			 sum = sum + ((long long )2 * i - 1) ;	 
		
	}
	cout << sum  << endl ;
	return 0;
}