#include<iostream>
#include<cmath>
using namespace std;
int prime[10000001]; // n  = 10 ^ 7;
void sang(int n ){
	// b1 coi tất cả các số từ 0 tới n là số nguyên tô ;
	for(int i = 0 ; i <= 10000000 ; i++){
		prime[i] = 1;
	}
	// b2 sàng 
		prime[0] = prime[1] = 0; // Gán 0 cho prime[0] và prime[1], vì 0 và 1 không phải số nguyên tố.
	for(int i = 2 ; i <= sqrt(10000000); i++){
		if(prime[i]){
			for(int j = i * i ; j <= 10000000 ; j += i){
				prime[j] = 0;
			}
		}
	}
	
}
bool cc(int n ){
	int digit;
	int maxs = n % 10;
	while(n != 0){
		digit = n % 10;
		if(maxs < digit){
			return false;
		}
		n = n / 10;
	}
	return true;
}
int main(){
	int n ; cin >> n;
	int dem = 0 ;
	sang(n);
	for(int i = 2 ; i <= n ; i++){
		if(prime[i] && cc(i)){
			dem++;
			cout << i << " ";
		}
	}
	cout << endl;
	cout << dem;
}