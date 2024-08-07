#include<iostream>
using namespace std;
	bool chua6(int n );
	bool tongchan(int n);
	bool chanle(int n);
	// ham xet so 6
	bool chua6(int n){
		int dem6 = 0;
		for(int i = 0 ; n > i ; (n = n /10)){
			if(n % 10 == 6) {
				dem6++;
		}
	}
		if(dem6 >= 1 ){
			return true;
		
	}
		else{
			return false;
	}
}
	// ham tinh tong chan
	bool tongchan(int n){
		int sum = 0;
		for(int i = 0 ; n > i ; (n = n /10)){
			sum = sum + ( n % 10);
	}
		if(sum % 2 ==0){
			return true;
		}
		else{
			return false;
		}
}
	// ham xet so luong chan le
	bool chanle(int n){
		int demchan;
		int demle;
		demchan = 0;
		demle = 0;
		for(int i = 0 ; n > i ; (n = n / 10)){
			if(n % 2 == 0){
				demchan++;
			}
			else if(n % 2 !=0){
				demle++;
			}
		}
		if(demchan < demle){
			return true;
		}
		else{
			return false;
		}
	}
int main(){
	int a , b;
	cin >> a >> b;
	for( int i = a; i <= b ;i++){
		if(chua6(i)&& tongchan(i)&& chanle(i)){
			cout << i << " ";
		}
	} 
	return 0;
}





