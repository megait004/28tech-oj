#include<iostream>
using namespace std;
int main(){
	int a , b , c , n ;
	cin >> a >> b >> c >> n;
	int t = a + b + c + n ;
	if(t % 3 != 0){
		cout << "NO"; // vi so tien P mang ve khong the chia deu cho 3 chi em
	}
	else{
		int x = t / 3 ; // moi chi em co x dong tien sau khi chia deu
		if(x >= a && x >= b && x >= c){
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
	
	return 0;

}