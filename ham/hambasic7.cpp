#include<iostream>
using namespace std;
bool check(long long n);
bool check(long long n){
	int sum ;
	sum = 0;
	for(int i = 0 ; n > i ;(n = n / 10)){
		sum += (n % 10);
		
	}
	if(sum % 10 == 8  ){
		return true;
	}
	else{
		return false;
	}
	
}
int main(){
	long long x ;
	cin >> x ;
	if(check(x)== true){
		cout << "28tech" ;
	}
	else {
		cout << "29tech" ;
	}

	return 0;
}