#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	long long a , b ;
	cin >> a >> b ;
	// duy?t t? i cho toi can c?a a va can c?a b , ph?i lam tron len can c?a th?ng a 
	for(long long i = ceil(sqrt(a)) ; i <= sqrt(b); i++){
		cout << i * i << " ";
	}
	return 0;
}