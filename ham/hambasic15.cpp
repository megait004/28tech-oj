#include<iostream>
#define ll long long
using namespace std;
bool rev(ll n);
bool rev(ll n){
	long long du;
	long long origin = n; // phai tao mot bien de luu gia tri mac dinh ban dau cua n;
	long long solatnguoc = 0;
	for(long long i = 0 ; n > i ; n = n / 10){
		du = n % 10; 
	   	solatnguoc = (long long)solatnguoc * 10 + (du); 
	  	if(solatnguoc == origin){ // sau do moi so sanh so mac dinh do voi so lat nguoc
	  		return true;
	  }
	}
	
	return false;
}
int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(rev(i)){
            cout << i << " ";
        }
    }
}